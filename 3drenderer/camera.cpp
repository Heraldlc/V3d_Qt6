#include "camera.h"



Camera::Camera(QVector3D position, QVector3D up, float yaw, float pitch)
    :position(position),
    worldUp(up),
    front(-position),
    pitch(pitch),
    yaw(yaw),
    movementSpeed(SPEED),
    mouseSensitivity(SENSITIVITY),
    zoom(ZOOM)
{
    this->updateCameraVectors();

    for(uint i = 0; i != 1024; ++i)
        keys[i] = false;
}

Camera::~Camera()
{

}

// return the view matrix using Eular angles and LookAt matrix
QMatrix4x4 Camera::getViewMatrix()
{
    QMatrix4x4 view;
    view.lookAt(this->position, this->position + this->front, this->up);
    return view;
}

// process input received from a mouse
void Camera::processMouseMovement(float xoffset, float yoffset, bool constrainPitch)
{
    xoffset *= this->mouseSensitivity;
    yoffset *= this->mouseSensitivity;

    this->yaw += xoffset;
    this->pitch += yoffset;

    if(constrainPitch){
        if(this->pitch >90.0f) this->pitch = 89.0f;
        if(this->pitch <-90.0f) this->pitch = -89.0f;
    }
    this->updateCameraVectors();
}

// process mouse scroll
void Camera::processMouseScroll(float yoffset)
{
    if(this->zoom >= 1.0f && this->zoom <= 45.0f) this->zoom -= yoffset;
    if(this->zoom >45.0f) this->zoom = 45.0f;
    if(this->zoom <1.0f) this->zoom = 1.0f;
}

// process W S A D E
void Camera::processInput(float dt)
{
    if(keys[Qt::Key_W])
        processKeyboard(FORWARD, dt);
    if (keys[Qt::Key_S])
        processKeyboard(BACKWARD, dt);
    if (keys[Qt::Key_A])
        processKeyboard(LEFT, dt);
    if (keys[Qt::Key_D])
        processKeyboard(RIGHT, dt);
    if (keys[Qt::Key_E])
        processKeyboard(UP, dt);
    if (keys[Qt::Key_Q])
        processKeyboard(DOWN, dt);

}

void Camera::updateCameraVectors()
{
    // Calculate the new Front vector
    QVector3D front;
    front.setX(cos(this->yaw) * cos(this->pitch));
    front.setY(sin(this->pitch));
    front.setZ(sin(this->yaw) * cos(this->pitch));
    this->front = front.normalized();
    this->right = QVector3D::crossProduct(this->front, this->worldUp).normalized(); // 叉乘
    this->up = QVector3D::crossProduct(this->right, this->front).normalized();
}

void Camera::processKeyboard(Camera_Movement direction, float deltaTime)
{
    float velocity = this->movementSpeed * deltaTime;
    if (direction == FORWARD)
        this->position += this->front * velocity;
    if (direction == BACKWARD)
        this->position -= this->front * velocity;
    if (direction == LEFT)
        this->position -= this->right * velocity;
    if (direction == RIGHT)
        this->position += this->right * velocity;
    if (direction == UP)
        this->position += this->worldUp * velocity;
    if (direction == DOWN)
        this->position -= this->worldUp * velocity;
}

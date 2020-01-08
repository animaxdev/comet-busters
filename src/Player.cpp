#include "../include/Player.h"

Player::Player(int x, int y, int width, int height, std::string textureId): GameObject(x, y, width, height, textureId) {}

void Player::load()
{
    GameObject::load();
}

void Player::draw(SDL_Renderer* renderer)
{
    GameObject::draw(renderer);
}

void Player::update()
{
}

void Player::clean()
{
    GameObject::clean();
}

long int Player::getScore() const{ return this->score; }
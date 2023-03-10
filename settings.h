#pragma once
#include "SFML/Graphics.hpp"

const float WINDOW_WIDTH = 800.f;
const float WINDOW_HEIGHT = 1000.f;
const std::string WINDOW_TITLE = "SFML Race";
const float FPS = 60.f;

const sf::Vector2f GRASS_POS{ 0.f, 0.f };
const sf::Vector2f SEND_POS{ 50.f, 0.f };
const sf::Vector2f ROAD_POS{ 100.f, 0.f };

const float ROAD_LAYER_SPEED = 10.f;
const float ROAD_OFFSET = 100.f;
const float ROAD_WIDTH = 400.f;

const float CAR_SPEED = 5.f;
const float PLAYER_WIDTH = 150.f;
const float PLAYER_HEIGHT = 303.f;
//const sf::Vector2f CAR_SPRITE = { 304, 150};
const float RIGHT_ROADSIDE = 500.f;
const float LEFT_ROADSIDE = 100.f;
const std::string PLAYER_FILE_NAME = "car.png";
const sf::Vector2f PLAYER_START_POS{ (LEFT_ROADSIDE + PLAYER_WIDTH / 2), WINDOW_HEIGHT - 350 };

const float OBSTACLE_SPEED = 1.f;

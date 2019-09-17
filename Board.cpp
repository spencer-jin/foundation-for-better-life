#include "Board.h"


Board::Board() {

}

Board::~Board() {

}

void Board::drawBoard() {

}

void Board::update() {
    GameObject* obj = nullptr;
    for (int i = 0; i < 3; i++) {
        obj = m_lanes[m_playerPosition].back();
        m_lanes[i].pop_back();
    }
    obj->influencePlayer(m_player);
    m_distance++;
    if (m_distance == 100 || m_distance == 200)
        m_level++;
    m_score += m_level;
    m_gameObjectGenerator.feedItem(&m_lanes); // change the implementation to passing a pointer to the m_lanes
}

bool Board::checkStatus() {
    return true;
}

int Board::getPlayerPosition() const {
    return m_playerPosition;
}

int Board::getScore() const {
    return m_score;
}

int Board::getDistance() const {
    return m_distance;
}

const std::vector<std::vector<GameObject*> >& Board::getLanes() const { 
    return m_lanes;
}

void Board::setPlayerPosition(int pos) {
    m_playerPosition = pos;
}
#ifndef CONTROLE_H
#define CONTROLE_H
#include "Config.h"

void initControl();
int readEncDir(); // Retourne -1 (Gauche), 0 (Rien), 1 (Droite)
bool redSWBtn();   // Retourne true si cliqué
bool readSendBtn();   // Retourne true si appuyé

#endif

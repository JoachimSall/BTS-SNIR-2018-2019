/**
 *  Copyright (C) 2018  local  (local@appert44.org)
 *  @file         PortParallele.cpp
 *  @brief        interaction avec les ports
 *  @version      0.1
 *  @date         07 nov. 2018 11:26:18
 *
 *  Description detaillee du fichier PortParallele.cpp
 *  Fabrication   gcc (Ubuntu 7.3.0-16ubuntu3) 7.3.0 
 *  @todo         Liste des choses restant a faire.
 *  @bug          07 nov. 2018 11:26:18 - Aucun pour l'instant
 */

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

// Includes system C

// Includes system C++
// A décommenter si besoin cout, cin, ...
 #include <iostream>
 using namespace std;

// Includes qt

// Includes application
#include "PortParallele.h"

/**
 * Constructeur
 */
PortParallele::PortParallele()
{
	adresse_=kLpt1;
}

/**
 * Destructeur
 */
PortParallele::~PortParallele()
{
}

void PortParallele::SetStrobe()
{
	AccesIO();
	int data = inb(adresse_+kCommande);
	data = data & ~kMasqueStrobe;
	outb(data, adresse_+kCommande);
}


void PortParallele::ResetStrobe()
{
	AccesIO();
	int data = inb(adresse_+kCommande);
	data = data | kMasqueStrobe;
	outb(data, adresse_+kCommande);
}

void PortParallele::SetColorLed()
{
	AccesIO();
	int data = inb(adresse_+kCommande);
	data = data & ~kMasqueColorLed;
	outb(data, adresse_+kCommande);
}

void PortParallele::ResetColorLed()
{
	AccesIO();
	int data = inb(adresse_+kCommande);
	data = data | kMasqueColorLed;
	outb(data, adresse_+kCommande);
}

void PortParallele::SetDisplayer(uint8_t number)
{
	AccesIO();
	outb(number, adresse_+kData);
}

void PortParallele::ResetDisplayer()
{
	AccesIO();
	outb(0xF0, adresse_+kData);
}

int PortParallele::GetBusy(void)
{
	AccesIO();
	int data = inb(adresse_ + kStatus);
	data = data & kMasqueBusy;
	int retour = 0;
	if ( data == kMasqueBusy)
		retour = 1;
	else
		retour = 0;
	return retour;
}

int PortParallele::GetAck(void)
{
	AccesIO();
	int data = inb(adresse_ + kStatus);
	data = data & kMasqueAck;
	int retour = 0;
	if ( data == kMasqueAck)
		retour = 1;
	else
		retour = 0;
	return retour;
}

void PortParallele::AccesIO()
{
	if(ioperm(adresse_, 0x03, 1) != 0)
		{
			cerr << "ioperm()" << endl;
			exit(1);
		}
}

// Methodes publiques
// ex :
/**
 * Exemple de description d'une methode
 *
 * @param un_parametre  Description d'un parametre
 * @return              Description du retour
 */
// ReturnType PortParallele::NomMethode(Type parametre)
// {
// }

// Methodes protegees

// Methodes privees

// Programme principal
// Si c'est la classe principale du projet, on place une fonction main()
// Dans ce cas, on peut supprimer les fichiers de tests unitaires
// ex :
// int main(int argc, char *argv[])
// {
//    // Construction de l'instance de la classe principale
//    cout << "Construction de l'instance de la classe principale PortParallele" << endl;
//    PortParallele *portparallele = new PortParallele();
//    // Lancement de l'activité principale
//    return 0;
// }


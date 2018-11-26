/**
 *  Copyright (C) 2018  local  (local@appert44.org)
 *  @file         Tourniquet.cpp
 *  @brief        Tourniquet
 *  @version      0.1
 *  @date         22 nov. 2018 10:47:51
 *
 *  Description detaillee du fichier Tourniquet.cpp
 *  Fabrication   gcc (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0 
 *  @todo         Liste des choses restant a faire.
 *  @bug          22 nov. 2018 10:47:51 - Aucun pour l'instant
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
#include "unistd.h"
using namespace std;

// Includes qt

// Includes application
#include "Tourniquet.h"

/**
 * Constructeur
 */
Tourniquet::Tourniquet()
{
	port_=0;
	capteur_=new CapteurTourniquet();
	etat_precedent_ = false;
	etat_actuel_ = false;
	places_ =0;
}

/**
 * Destructeur
 */
Tourniquet::~Tourniquet()
{
}

// Methodes publiques

bool Tourniquet::DetecterPassage()
{
	bool retour = false;
	etat_actuel_ = capteur_->getEtatCapteur(); //port_->GetBusy
	if (etat_precedent_ == false && etat_actuel_ == true)
	{
		places_--;
		usleep(250000);     //rebond
		retour = true;
	}
	etat_precedent_ = etat_actuel_;
	return retour;
}

void Tourniquet::Verrouiller()
{
	port_->ResetColorLed();
}

void Tourniquet::Deverrouiller()
{
	port_->SetColorLed();
}
// ex :
/**
 * Exemple de description d'une methode
 *
 * @param un_parametre  Description d'un parametre
 * @return              Description du retour
 */
// ReturnType Tourniquet::NomMethode(Type parametre)
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
//    cout << "Construction de l'instance de la classe principale Tourniquet" << endl;
//    Tourniquet *tourniquet = new Tourniquet();
//    // Lancement de l'activité principale
//    return 0;
// }


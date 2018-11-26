/**
 *  Copyright (C) 2018  local  (local@appert44.org)
 *  @file         Gestionnaire.cpp
 *  @brief        Gestionnaire telecabine
 *  @version      0.1
 *  @date         22 nov. 2018 10:46:54
 *
 *  Description detaillee du fichier Gestionnaire.cpp
 *  Fabrication   gcc (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0 
 *  @todo         Liste des choses restant a faire.
 *  @bug          22 nov. 2018 10:46:54 - Aucun pour l'instant
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
#include <unistd.h>

// Includes qt

// Includes application
#include "Gestionnaire.h"

/**
 * Constructeur
 */
Gestionnaire::Gestionnaire()
{
	portparallele = new PortParallele();
}

/**
 * Destructeur
 */
Gestionnaire::~Gestionnaire()
{
}

// Methodes publiques

void GestionnaireTelecabine::ActivitePrincipale() {
	cout << "Telecabine 1 : attente telecabine" << endl;
	while (0 == capteurtelecabine_->GetEtatCapteur())
		;
	cout << "Telecabine 1 : telecabine arrivée" << endl;
	cout << "Telecabine 1 : Deverrouillage portillon" << endl;
	cout << "Telecabine 1 : Etat = attente sortie passagers" << endl;
	sleep(5);
	cout << "Telecabine 1 : Verrouillage portillon" << endl;
	cout << "Telecabine 1 : Etat = attente entrée passagers" << endl;
	tourniquet_->setPlaces(9);
	afficheur_->Afficher(tourniquet_->getPlaces());
	tourniquet_->Deverrouiller();
	do {
		if (true == tourniquet_->DetecterPassage())
			afficheur_->Afficher(tourniquet_->getPlaces());
	} while (0 < tourniquet_->getPlaces());
	tourniquet_->Verrouiller();
	cout << "Telecabine 1 : Etat = fin préparatif départ" << endl;
	alarme_->Activer();
	sleep(4);
	alarme_->Desactiver();
	cout << "Telecabine 1 : Transmission du signal de départ" << endl;
	cout << "Telecabine 1 : Etat = Attente départ télécabine" << endl;
	while (1 == capteurtelecabine_->GetEtatCapteur())
		;
	afficheur_->Eteindre();
	cout << "Telecabine 1 : cabine partie" << endl;
	sleep(4);
}

// ex :
/**
 * Exemple de description d'une methode
 *
 * @param un_parametre  Description d'un parametre
 * @return              Description du retour
 */
// ReturnType Gestionnaire::NomMethode(Type parametre)
// {
// }

// Methodes protegees

// Methodes privees

// Programme principal
// Si c'est la classe principale du projet, on place une fonction main()
// Dans ce cas, on peut supprimer les fichiers de tests unitaires
// ex :
 int main(int argc, char *argv[])
 {
    // Construction de l'instance de la classe principale
    cout << "Construction de l'instance de la classe principale Gestionnaire" << endl;
    Gestionnaire *gestionnaire = new Gestionnaire();
    // Lancement de l'activité principale
    //gestionnaire->GererTelecabine();
    return 0;
 }


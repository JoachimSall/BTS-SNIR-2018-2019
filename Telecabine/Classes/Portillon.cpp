/**
 *  Copyright (C) 2018  local  (local@appert44.org)
 *  @file         Portillon.cpp
 *  @brief        Portillon
 *  @version      0.1
 *  @date         22 nov. 2018 10:47:42
 *
 *  Description detaillee du fichier Portillon.cpp
 *  Fabrication   gcc (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0 
 *  @todo         Liste des choses restant a faire.
 *  @bug          22 nov. 2018 10:47:42 - Aucun pour l'instant
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
#include "Portillon.h"

/**
 * Constructeur
 */
Portillon::Portillon()
{
}

/**
 * Destructeur
 */
Portillon::~Portillon()
{
}

// Methodes publiques

void Portillon::Verrouiller()
{
	cout << "Portillon verrouiller";
}

void Portillon::Deverrouiller()
{
	cout << "Portillon deverrouiller";
}

// ex :
/**
 * Exemple de description d'une methode
 *
 * @param un_parametre  Description d'un parametre
 * @return              Description du retour
 */
// ReturnType Portillon::NomMethode(Type parametre)
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
//    cout << "Construction de l'instance de la classe principale Portillon" << endl;
//    Portillon *portillon = new Portillon();
//    // Lancement de l'activité principale
//    return 0;
// }


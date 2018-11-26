/**
 *  Copyright (C) 2018  local  (local@appert44.org)
 *  @file         Gestionnaire.h
 *  @brief        Gestionnaire telecabine
 *  @version      0.1
 *  @date         22 nov. 2018 10:46:54
 *
 *  @note         Voir la description detaillee explicite dans le fichier
 *                Gestionnaire.cpp
 *                C++ Google Style :
 *                http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml
 */

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef _GESTIONNAIRE_H
#define _GESTIONNAIRE_H

// Includes system C
#include <stdint.h>  // definition des types int8_t, int16_t ...
#include "PortParallele.h"
#include "Portillon.h"
#include "Afficheur.h"
#include "AlarmeSonore.h"
#include "Tourniquet.h"
#include "CapteurTelecabine.h"

// Includes system C++

// Includes qt

// Includes application

// Constantes
// ex :
// const int kDaysInAWeek = 7;

// Enumerations
// ex :
// enum Couleur
// {
//     kBlue = 0,
//     kWhite,
//     kRed,
// };

// Structures
// ex:
// struct UrlTableProperties
// {
//  string name;
//  int numEntries;
// }

// Declarations de classe avancees
// ex:
// class MaClasse;

/** @brief Gestionnaire telecabine
 *  Description detaillee de la classe.
 */
class Gestionnaire
{
public :
    /**
     * Constructeur
     */
    Gestionnaire();
    /**
     * Destructeur
     */
    ~Gestionnaire();

    // Methodes publiques de la classe

    void gerer();
    void attendre60s();
    void attendre4s();
    void AttendreArriveeTelecabine();
    void AttendreDepartTelecabine();
    void transmettreSignalDepart();

    // ex : ReturnType NomMethode(Type);

    // Pour les associations :
    // Methodes publiques setter/getter (mutateurs/accesseurs) des attributs prives
    // ex :
    // void setNomAttribut(Type nomAttribut) { nomAttribut_ = nomAttribut; }
    // Type getNomAttribut(void) const { return nomAttribut_; }
protected :
    // Attributs proteges

    // Methode protegees

private :
    // Attributs prives
    // ex :
    // Type nomAttribut_;

          PortParallele * portparallele;



    // Methodes privees
};

// Methodes publiques inline
// ex :
// inline void Gestionnaire::maMethodeInline(Type valeur)
// {
//   
// }
// inline Type Gestionnaire::monAutreMethode_inline_(void)
// {
//   return 0;
// }

#endif  // _GESTIONNAIRE_H


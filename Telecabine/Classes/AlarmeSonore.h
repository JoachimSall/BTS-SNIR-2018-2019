/**
 *  Copyright (C) 2018  local  (local@appert44.org)
 *  @file         AlarmeSonore.h
 *  @brief        classe alarme sonore
 *  @version      0.1
 *  @date         15 nov. 2018 13:54:53
 *
 *  @note         Voir la description detaillee explicite dans le fichier
 *                AlarmeSonore.cpp
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
#ifndef _ALARMESONORE_H
#define _ALARMESONORE_H

// Includes system C
//#include <stdint.h>  // definition des types int8_t, int16_t ...
#include "PortParallele.h"
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

/** @brief classe alarme sonore
 *  Description detaillee de la classe.
 */
class AlarmeSonore
{
public :
    /**
     * Constructeur
     */
    AlarmeSonore();
    /**
     * Destructeur
     */
    ~AlarmeSonore();

    // Methodes publiques de la classe

    void Activer();
    void Desactiver();

    // ex : ReturnType NomMethode(Type);

    // Pour les associations :
    // Methodes publiques setter/getter (mutateurs/accesseurs) des attributs prives
    // ex :
    // void setNomAttribut(Type nomAttribut) { nomAttribut_ = nomAttribut; }
    // Type getNomAttribut(void) const { return nomAttribut_; }
    void setPort(PortParallele *port){port_ = port;}
    PortParallele * getPort(){return port_;}
protected :
    // Attributs proteges

    // Methode protegees

private :
    // Attributs prives

    PortParallele * port_;

    // ex :
    // Type nomAttribut_;

    // Methodes privees
};

// Methodes publiques inline


// ex :
// inline void AlarmeSonore::maMethodeInline(Type valeur)
// {
//   
// }
// inline Type AlarmeSonore::monAutreMethode_inline_(void)
// {
//   return 0;
// }

#endif  // _ALARMESONORE_H


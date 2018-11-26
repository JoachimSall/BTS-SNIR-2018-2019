/**
 *  Copyright (C) 2018  local  (local@appert44.org)
 *  @file         CapteurTourniquet.h
 *  @brief        Capteur Tourniquet
 *  @version      0.1
 *  @date         22 nov. 2018 10:48:16
 *
 *  @note         Voir la description detaillee explicite dans le fichier
 *                CapteurTourniquet.cpp
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
#ifndef _CAPTEURTOURNIQUET_H
#define _CAPTEURTOURNIQUET_H

// Includes system C
#include <stdint.h>  // definition des types int8_t, int16_t ...
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

/** @brief Capteur Tourniquet
 *  Description detaillee de la classe.
 */
class CapteurTourniquet
{
public :
    /**
     * Constructeur
     */
    CapteurTourniquet();
    /**
     * Destructeur
     */
    ~CapteurTourniquet();

    // Methodes publiques de la classe

    bool getEtatCapteur();

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
    // ex :
    // Type nomAttribut_;

         PortParallele * port_;

    // Methodes privees
};

// Methodes publiques inline
// ex :
// inline void CapteurTourniquet::maMethodeInline(Type valeur)
// {
//   
// }
// inline Type CapteurTourniquet::monAutreMethode_inline_(void)
// {
//   return 0;
// }

#endif  // _CAPTEURTOURNIQUET_H


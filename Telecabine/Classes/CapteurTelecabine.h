/**
 *  Copyright (C) 2018  local  (local@appert44.org)
 *  @file         CapteurTelecabine.h
 *  @brief        Capteur Telecabine
 *  @version      0.1
 *  @date         22 nov. 2018 10:47:23
 *
 *  @note         Voir la description detaillee explicite dans le fichier
 *                CapteurTelecabine.cpp
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
#ifndef _CAPTEURTELECABINE_H
#define _CAPTEURTELECABINE_H

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

/** @brief Capteur Telecabine
 *  Description detaillee de la classe.
 */
class CapteurTelecabine
{
public :
    /**
     * Constructeur
     */
    CapteurTelecabine();
    /**
     * Destructeur
     */
    ~CapteurTelecabine();

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
// inline void CapteurTelecabine::maMethodeInline(Type valeur)
// {
//   
// }
// inline Type CapteurTelecabine::monAutreMethode_inline_(void)
// {
//   return 0;
// }

#endif  // _CAPTEURTELECABINE_H


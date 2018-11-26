/**
 *  Copyright (C) 2018  local  (local@appert44.org)
 *  @file         Tourniquet.h
 *  @brief        Tourniquet
 *  @version      0.1
 *  @date         22 nov. 2018 10:47:51
 *
 *  @note         Voir la description detaillee explicite dans le fichier
 *                Tourniquet.cpp
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
#ifndef _TOURNIQUET_H
#define _TOURNIQUET_H

// Includes system C
#include <stdint.h>  // definition des types int8_t, int16_t ...
#include "PortParallele.h"
#include "CapteurTourniquet.h"

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

/** @brief Tourniquet
 *  Description detaillee de la classe.
 */
class Tourniquet
{
public :
    /**
     * Constructeur
     */
    Tourniquet();
    /**
     * Destructeur
     */
    ~Tourniquet();

    // Methodes publiques de la classe

    bool DetecterPassage();
    void Verrouiller();
    void Deverrouiller();



    // ex : ReturnType NomMethode(Type);

    // Pour les associations :
    // Methodes publiques setter/getter (mutateurs/accesseurs) des attributs prives
    // ex :
    // void setNomAttribut(Type nomAttribut) { nomAttribut_ = nomAttribut; }
    // Type getNomAttribut(void) const { return nomAttribut_; }

    void setPlaces_(int places){places_ = places;}
    int getPlaces_(){return places_;}


    void setPort(PortParallele *port){port_ = port;}
    PortParallele * getPort(){return port_;}

    void setCapteur(CapteurTourniquet *capteur){capteur_ = capteur;}
    		CapteurTourniquet * getCapteur(){return capteur_;}

protected :
    // Attributs proteges

    // Methode protegees

private :
    // Attributs prives
    // ex :
    // Type nomAttribut_;
    		int places_;
    		bool etat_actuel_ ;
    		bool etat_precedent_ ;
            PortParallele * port_;
            CapteurTourniquet * capteur_;

    // Methodes privees
};

// Methodes publiques inline
// ex :
// inline void Tourniquet::maMethodeInline(Type valeur)
// {
//   
// }
// inline Type Tourniquet::monAutreMethode_inline_(void)
// {
//   return 0;
// }

#endif  // _TOURNIQUET_H


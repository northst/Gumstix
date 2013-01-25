
/*
 *  Copyright (C) 2013  kevin  (kevin@appert44.org)
 *  @file         ClientHTTPTesteur.h
 *  Classe        ClientHTTP
 *  @note         Classe en charge des tests unitaires
 */

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef _CLIENTHTTPTESTEUR_H
#define _CLIENTHTTPTESTEUR_H

// Includes system C

// Includes system C++
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

// Includes qt

// Includes application
#include "ClientHTTP.h"

class ClientHTTPTesteur : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(ClientHTTPTesteur);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testUnitaire1);
    CPPUNIT_TEST_SUITE_END();

public :
    void setUp();
    void tearDown();

    void testConstructor();
    void testUnitaire1();

protected :
    // Attributs proteges

    // Methode protegees

private :
    // Attributs prives

    // Methodes privees
};

#endif  // _CLIENTHTTPTESTEUR_H


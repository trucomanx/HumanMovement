/*
 * pdshuman.h
 * 
 * Copyright 2011 Fernando Pujaico Rivera <fernando.pujaico.rivera@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 */

/** \file pdshuman.h
 *  \author Fernando Pujaico Rivera
 *  \date 01-04-2011
 *  \brief Funciones que trabajan con caracteristicas del cuerpo humano.
 *  
 *  
 */

#ifndef __PDSHUMAN_H__
#define __PDSHUMAN_H__

#ifdef __cplusplus
extern "C" {
#endif 

#include <stdio.h>
#include <stdlib.h>


/** \defgroup PdsHumanGroup Módulo PdsHuman.
 *  \brief Funciones que trabajan con caracteristicas de un ser humano.
 *  
 * @{
 */

#ifndef PDS_OK
/*!
  \def PDS_OK
  Valor retornado en caso de exito, este es un valor diferente que cero.
*/
	#define PDS_OK 1
#endif

#ifndef PDS_WRONG
/*!
  \def PDS_WRONG
  Valor retornado en caso de fracaso, este valor es igual a cero.
*/
	#define PDS_WRONG 0
#endif


/*! \struct PdsHuman
 *  \brief Estructura de tipo  PdsHuman .
 *
 *  Para usar incluir la cabecera pds/pdshuman.h.
 *  \ingroup PdsHumanGroup
 *  \author Fernando Pujaico Rivera
 */
typedef struct 
{
	float NECK;

    float SHOULDER;

    float ARM;
    float FOREARM;
    float HAND;

    float CHEST;
    float BELLY;

    float HIP;

    float FEMUR;
    float TIBIA;
    float FOOT;
}PdsHumanDistance;

typedef struct 
{
	float Point[15];
}PdsHumanData;

typedef struct 
{
    PdsHumanDistance Distance;
    PdsHumanData     Position[3];
}PdsHumanData;

/** @name pds_human_new
 *  Creando nuevos vectores
 * @{
 */

/** \fn PdsHuman *pds_human_new(PdsRaNatural Nel)
 *  \brief Crea un vector de tipo PdsHuman e inicia con cero todos los elementos.
 *  \param[in] Nel Es el número de elementos del vector.
 *  \return Un puntero al vector de tipo PdsHuman.
 *  \ingroup PdsHumanGroup
 */
PdsHuman *pds_human_new(PdsRaNatural Nel);

//@}


/**
 * @}
 */

#ifdef __cplusplus
}
#endif 

#endif



/*
 * pdsstickman3d.h
 * 
 * Copyright 2018 Fernando Pujaico Rivera <fernando.pujaico.rivera@gmail.com>
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

/** \file pdsstickman3d.h
 *  \author Fernando Pujaico Rivera
 *  \date 01-04-2011
 *  \brief Funciones que trabajan con ...
 *  
 *  <br>Estas funciones trabajan con ...<br>
 */

#ifndef __PDSSTICKMAN3D_H__
#define __PDSSTICKMAN3D_H__

#ifdef __cplusplus
extern "C" {
#endif 

#include <stdio.h>
#include <stdlib.h>
#include <pds/pdsstickmanglobal.h>


/** \defgroup PdsStickman3DGroup Módulo PdsStickman3D.
 *  \brief Funciones que trabajan con vectores.
 *  
 *  <br>Estas funciones trabajan con un vector de la forma.<br>
 *  <center>
 *  \image html vector.png "Vector de \b Nel elementos"
 *  </center>
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


/*! \struct PdsStickman3D
 *  \brief Estructura de tipo  PdsStickman3D .
 *
 *  Esta estructura genera una StickMan
 *  Para usar incluir la cabecera pds/pdsstickman3d.h.
 *  \ingroup PdsStickman3DGroup
 *  \author Fernando Pujaico Rivera
 */
typedef struct 
{
	/*! Un arreglo de articulaciones*/
	PdsArticulation Art[18];

	/*! Un arreglo de distancias entre articulaciones*/
    PdsStickmanReal Dist[18][18]

	/*! Número de articulaciones. */
	PdsRaNatural Nel;
}PdsStickman3D;

/** @name pds_vector_new
 *  Creando nuevos vectores
 * @{
 */

/** \fn PdsStickman3D *pds_vector_new(PdsRaNatural Nel)
 *  \brief Crea un vector de tipo PdsStickman3D e inicia con cero todos los elementos.
 *  \param[in] Nel Es el número de elementos del vector.
 *  \return Un puntero al vector de tipo PdsStickman3D.
 *  \ingroup PdsStickman3DGroup
 */
PdsStickman3D *pds_vector_new(PdsRaNatural Nel);

//@}




/**
 * @}
 */

#ifdef __cplusplus
}
#endif 

#endif



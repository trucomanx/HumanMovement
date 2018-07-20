/*
 * pdsstickmanglobal.h
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

/** \file pdsstickmanglobal.h
 *  \author Fernando Pujaico Rivera
 *  \date 01-04-2011
 *  \brief Variables globales y definciones de la biblioteca pdsstickman.
 *  
 *  <br><br>Aquí Estarán definidas las variables globales que serán usadas en
 *  toda la biblioteca pdsstickman.
 */

#ifndef __PDSSTICKMANGLOBAL_H__
#define __PDSSTICKMANGLOBAL_H__

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif 

/** \defgroup PdsStickmanGlobalGroup Definiciones globales.
 *  \brief Definiciones globales en toda la biblioteca pdsstickman.
 * @{
 */

/*! Defino el tipo de variable real como PdsStickmanReal.
 *  \ingroup PdsStickmanGlobalGroup
 */
typedef float PdsStickmanReal;

/*! Defino el tipo de variable entero como PdsStickmanInteger.
 *  \ingroup PdsStickmanGlobalGroup
 */
typedef int PdsStickmanInteger;

/*! Defino el tipo de variable natural (incluye cero) como PdsStickmanNatural.
 *  \ingroup PdsStickmanGlobalGroup
 */
typedef unsigned int PdsStickmanNatural;

/**
 * @}
 */


#ifdef __cplusplus
}
#endif 

#endif /* __PDSSTICKMANGLOBAL_H__ */ 


/*
 * testprog1.c
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

/** \example testprog1.c
 *  \author Fernando Pujaico Rivera
 *  \date 18-04-2011
 *  \brief Programa para el testeo de algunas funciones de la biblioteca.
 *  
 *  Este programa solo hace una prueba simple de las funciones que hice
 *  mas al tun tun.
 */

#include <config.h>
#include <stdlib.h>
#include <pds/pdsra.h>

int main(int argc, char** argv)
{
	PdsMatrix *Mat=NULL;
	PdsMatrix *Mat1=NULL;
	PdsMatrix *Mat2=NULL;
	PdsVector *Vec=NULL;
	PdsVector *V1=NULL;
	PdsVector *V2=NULL;
	PdsRaReal m;
	
	////////////////////////////////////////////////////////////////////////


	Mat1=pds_matrix_new(3,3);
	Mat2=pds_matrix_new(3,3);
	if((Mat1==NULL)||(Mat2==NULL))	printf("ERROR: La matriz no ha podido crearse.\n");
	else
	{
		PDS_MSET(Mat1,0,0,1.3); PDS_MSET(Mat1,0,1,0.1);  PDS_MSET(Mat1,0,2,0.1);
		PDS_MSET(Mat1,1,0,0.5); PDS_MSET(Mat1,1,1,-4.2); PDS_MSET(Mat1,1,2,0.2);
		PDS_MSET(Mat1,2,0,0.1); PDS_MSET(Mat1,2,1,-1.2); PDS_MSET(Mat1,2,2,0.1);
		printf("\nMat1=\n");
		pds_matrix_printf(Mat1);

		pds_matrix_set_value(Mat2,0,0,3.3); 
		pds_matrix_set_value(Mat2,0,1,-0.6);
		pds_matrix_set_value(Mat2,0,2,-0.6);
		///////////////////////////////////
		pds_matrix_set_value(Mat2,1,0,0.1); 
		pds_matrix_set_value(Mat2,1,1,1.2);
		pds_matrix_set_value(Mat2,1,2,-1.2);
		///////////////////////////////////
		pds_matrix_set_value(Mat2,2,0,-0.1); 
		pds_matrix_set_value(Mat2,2,1,0.2);
		pds_matrix_set_value(Mat2,2,2,3.2);
		printf("\nMat2=\n");
		pds_matrix_printf(Mat2);

		Mat=pds_matrix_mul_matrix_new(Mat1,Mat2);
		if(Mat==NULL)	printf("ERROR: La matriz no ha podido crearse.\n");
		else
		{
			printf("\nMat=Mat1*Mat2\n");
			pds_matrix_printf(Mat);

			pds_matrix_get_min_value(Mat,&m);
			printf("\nMat[min][min]=%f\n",m);

			pds_matrix_get_max_value(Mat,&m);
			printf("Mat[max][max]=%f\n",m);

			pds_matrix_swap_rows(Mat,0,1);
			printf("\nMat:pds_matrix_swap_rows(Mat,0,1);\n");
			pds_matrix_printf(Mat);

			printf("\n");
			pds_matrix_destroy(&Mat);
			if(Mat==NULL) printf("La matriz Mat  ha sido liberada y limpiada.\n");
		}
		pds_matrix_destroy(&Mat1);
		if(Mat1==NULL) printf("La matriz Mat1 ha sido liberada y limpiada.\n");
		pds_matrix_destroy(&Mat2);
		if(Mat2==NULL) printf("La matriz Mat2 ha sido liberada y limpiada.\n");
	}

	////////////////////////////////////////////////////////////////////////

	Vec=pds_vector_new(4);
	if(Vec==NULL)	printf("ERROR: El vector no ha podido crearse.\n");
	else
	{
		pds_vector_set_value(Vec,0,1.3);
		pds_vector_set_value(Vec,1,-3.2);
		pds_vector_set_value(Vec,2,0.1);
		pds_vector_set_value(Vec,3,4.5);

		printf("\nV=\n");
		pds_vector_printf(Vec);

		pds_vector_get_value(Vec,2,&m);
		printf("V[2]=%f\n",m);

		pds_vector_get_min_value(Vec,&m);
		printf("V[min]=%f\n",m);

		pds_vector_get_max_value(Vec,&m);
		printf("V[max]=%f\n",m);

		pds_vector_destroy(&Vec);
		if(Vec==NULL) printf("\nEl vector Vec ha sido liberado y limpiado.\n\n");
	}
	////////////////////////////////////////////////////////////////////////

    V1=pds_vector_new(4);
    pds_vector_init_value(V1,1.0);
	printf("V1=\n");
    pds_vector_printf(V1);
    V2=pds_vector_new(3);
    pds_vector_init_value(V2,1.0);
	printf("V2=\n");
    pds_vector_printf(V2);

    Vec=pds_vector_new_conv(V1,V2);
	printf("conv(V1,V2)=\n");
    pds_vector_printf(Vec);

	printf("\n");


    FILE *fd=NULL;
    int id;
    PdsRaNatural nc,nl;
    fd=fopen("datos.dat","r");
    if(fd!=NULL)
    {
        id=pds_load_number_of_columns_and_lines(fd,&nc,&nl);
        printf("datos.dat id:%d\n",id);
        printf("datos.dat nc:%d\n",nc);
        printf("datos.dat nl:%d\n",nl);
        fclose(fd);
    }
	return EXIT_SUCCESS;
}

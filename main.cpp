/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cristian
 *
 * Created on 18 de junio de 2018, 15:49
 */

/* 
 * File:   main.cpp
 * Author: Cristian
 *
 * Created on 28 de abril de 2015, 12:50
 */

//#include <cstdlib>
//#include "opencv2/highgui/highgui.hpp"

//#include <opencv2/core/utility.hpp>
//#include "opencv2/video/tracking.hpp"
//#include "opencv2/imgproc.hpp"
//#include "opencv2/videoio.hpp"
#include "opencv2/highgui.hpp"

#include <stdio.h>
#include <stdlib.h>


using namespace std;
using namespace cv;


int main(int argc, char** argv) {
Mat img1;
int i;

    img1 = imread("c:/75CD1394F.jpg");
//
//    namedWindow("ventana1");
//   
//    imshow("ventana1",img1);
//      
//    waitKey(0);
    
    FILE *archivo;

    char caracteres[100];
    int datos[100];
    

   // archivo = fopen("D:/PIC30.BMP","r");
    archivo = fopen("D:/prueba.txt","r");

    if (archivo == NULL) {
       fputs ("File error",stderr); exit (1);}
            
    else {
     
        i=1;
//        while (feof(archivo) == 0) {          
//            fscanf(archivo, "%d ", &datos[i]);
//             printf("%d" , i);
//            //fgets('%d',&datos[i],100,archivo);
//            i++;
//        }
        
        for (i=1;i<=100;i++) {          
            fread(&datos[i],1,1,archivo);
           // fscanf(archivo, "%d ", &datos[i]);
            
        }       
        
    }
    
    
 
//    for (i = 0; i < MAX_NUM_PARES; i++)
//      if (fscanf(entrada, "%d %d", &a[i], &b[i]) != 2)
//      break;
       
       
    fclose(archivo);
    
    printf("\nEl contenido del archivo de prueba es \n\n");   
    //printf("%d" , i);
    
    for (i=1;i<=100;i++)
        printf("%d ", datos[i]);
    
    system("PAUSE");
   
   return 0;
}

/*
for (size_t i = 0; i < image.rows; i++)
{
    for (size_t j = 0; j < image.cols; j++)
    {
        Vec3b pixel = image.at<Vec3b>(i, j);

        uchar B = pixel[0];
        uchar G = pixel[1];
        uchar R = pixel[2];

        gray.at<uchar>(i, j) = (B + G + R) / 3;
    }
}

*/
 /*  
function [r,g,b]=frgb565_to_rgb(im_filename)

    % Devuelve las componentes rgb de una imagen rgb565 
    % filename es la dirección de la imagen rgb565
    % r toma valores entre 0-31
    % g toma valores entre 0-63 
    % b toma valores entre 0-31
    
    fid = fopen(im_filename);
    data=fread(fid)

    k=1;
    for i=67:2:length(data)   
    %for i=71:2:length(data)     
        data_img_blue(k)=bitand(data(i),31); 

        data_img_green1(k)=bitshift(data(i),-5);
        data_img_green1(k)=bitand(data_img_green1(k),7);

        data_img_green2(k)=bitand(data(i+1),7);  
        data_img_green2(k)=bitshift(data_img_green2(k),3);

        data_img_green(k)=data_img_green1(k)+data_img_green2(k);

        data_img_red(k)=bitshift(data(i+1),-3);  
        data_img_red(k)=bitand(data_img_red(k),31);  
        k=k+1;
    end

    h=length(data_img_blue)/320; % altura de la imagen
    
    data_img_blue=reshape(data_img_blue,320,h);
    data_img_blue=data_img_blue';
    aux=data_img_blue(end:-1:1,:);
    data_img_blue=aux;

    data_img_green=reshape(data_img_green,320,h);
    data_img_green=data_img_green';
    aux=data_img_green(end:-1:1,:);
    data_img_green=aux;

    data_img_red=reshape(data_img_red,320,h);
    data_img_red=data_img_red';
    aux=data_img_red(end:-1:1,:);
    data_img_red=aux;

    r=data_img_red;
    g=data_img_green;
    b=data_img_blue;
    
end

   */
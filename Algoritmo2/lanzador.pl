#!/usr/bin/perl

# Fichero para automatizacion de ejecucion por lotes de un ejecutable
#dado parametros de entrada

$repeticiones=30;
@ejecutable=("matrices");
@matrizSize=("100","200","400","800","1000","1200","2000","4000");
$path="/home/erik-/Escritorio/ComputacionP/Modularidad/";

foreach $exe (@ejecutable){
    foreach $size (@matrizSize){
        $fichero="$path"."Soluciones/"."$exe"."-size"."$size";
         #print("$fichero \n");
            for ($i=0; $i<$repeticiones; $i++){
                print("$path$exe $size \n");
                system("$path$exe $size >> $fichero \n");
            }   
    }
}

exit(1);
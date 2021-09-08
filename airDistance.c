/**
 * Author: Skyler Tang
 *   Date: 2021/09/07
 *   Hack 2.0
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double alongitude = 0.0;
    double alatitude = 0.0;
    double longitude = 0.0;
    double latitude = 0.0;
    double distance = 0.0;

    printf("enter the latitude of origin in degrees: ");
    scanf("%lf: ",&alatitude);

    printf("enter the longitude of origin in degrees: ");
    scanf("%lf: ",&alongitude);

    printf("enter the latitude of destination in degrees: ");
    scanf("%lf: ",&latitude);

    printf("enter the longitude of destination in degrees: ");
    scanf("%lf: ",&longitude);

    double pi = 3.1415926;
    double earth = 6731.0;

    distance = acos(sin(alatitude*pi/180.0)*sin(latitude*pi/180.0)+cos(alatitude*pi/180.0)*cos(latitude*pi/180.0)*cos((longitude - alongitude)*pi/180)) * earth;

    printf("\n location distance: \n------------------\n");
    printf("origin: (%lf,%lf)\n",alatitude,alongitude);
    printf("destination: (%lf,%lf)\n",latitude,longitude);
    printf("air distance is %lf kms\n",distance);

    return 0;


}




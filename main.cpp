#include<iostream>
#include "Image_Class.h"

using namespace std;

int main() {
    Image I("C:\\Users\\ASUS\\Downloads\\wallpaperflare.com_wallpaper (10).jpg") ;
    for (int i =0 ; i<I.width ; i++) {
        for (int j =0 ; j<I.height ; j++) {
            for (int k =0 ; k<I.channels ; k++) {
                I(i,j,k) = 255-I(i,j,k) ;
            }
        }
    }

    I.saveImage("C:\\Users\\ASUS\\Downloads\\zzzzz.png");
    cout <<"filter applied" << endl;
    return 0;
}

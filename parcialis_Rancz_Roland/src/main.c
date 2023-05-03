#include <stdio.h>
#include "cookies.h"

int main() {
    Cookies_t cookie1;
    Cookies_t cookie2 = {"Csokis suti", 56, 1};
    readCookiesDetails(&cookie1);
    printCookiesDetails(cookie1);
    printf("\n");
    printCookiesDetails(cookie2);
    printf("\n**************************************");
    if(cookie1.calories > cookie2.calories){
        printCookiesDetails(cookie1);
    }else{
        printCookiesDetails(cookie2);
    }
    printf("\n**************************************");
    CookiesArray cookies;
    createArray(6, &cookies);
    if(!freopen("cookies.txt", "r", stdin)){
        printf("FILE OPENING ERROR");
        return -2;
    }
    for (int i = 0; i < cookies.capacity; ++i) {
        readCookiesDetails(&cookies.elements[i]);
    }
    printArray(cookies);
    freopen("CON", "r", stdin);
    return 0;
}

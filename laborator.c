#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, x, F;
    printf("introdu valorile variabilelor a, b, c, x: ");
    if(scanf("%lf%lf%lf%lf", &a, &b, &c, &x) !=4 ){
        printf("Nu ai introdus 4 nr");
        return 1;
    }
    if (c < 0 && b != 0){
        if(x + b ==0){
            printf("Eroare - impartirea la zero");
            return 1;
        }
        F = (x + a * c) / (x + b);
    }
    else if (c > 0 && b == 0){
        F = a * pow(x , 2) + pow(b , 2) * x + c;
    }
    else {
        if (c == 0){
            printf("Eroare - impartirea la zero");
            return 1;
        }
        F = (sin(x) + a) / c;
    }
    printf("x = %.4f\n", x);
    printf("F = %.4f\n", F);
    return 0;
}

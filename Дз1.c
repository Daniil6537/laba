#include <stdio.h>
#include <math.h>


/*int main() {
    float a, P;
    scanf("%f", &a);
    P = 4 * a;
    printf("%.2f\n", P);
    return 0;
}
*/


/*int main() {
    float a, S;
    scanf("%f", &a);
    S = a * a;
    printf("%.2f\n", S);
    return 0;
}
*/


/*int main() {
    float a, b, S, P;
    scanf("%f %f", &a, &b);
    S = a * b;
    P = 2 * (a + b);
    printf("%.2f %.2f\n", S, P);
    return 0;
}
*/


/*int main() {
    float d, L;
    const float PI = 3.14;
    scanf("%f", &d);
    L = PI * d;
    printf("%.2f\n", L);
    return 0;
}
*/


/*int main() {
    float a, V, S;
    scanf("%f", &a);
    V = a * a * a;
    S = 6 * a * a;
    printf("%.2f %.2f\n", V, S);
    return 0;
}
*/


/*int main() {
    float a, b, c, V, S;
    scanf("%f %f %f", &a, &b, &c);
    V = a * b * c;
    S = 2 * (a*b + b*c + a*c);
    printf("%.2f %.2f\n", V, S);
    return 0;
}
*/


/*int main() {
    float a, b, c, V, S;
    scanf("%f %f %f", &a, &b, &c);
    V = a * b * c;
    S = 2 * (a*b + b*c + a*c);
    printf("%.2f %.2f\n", V, S);
    return 0;
}
*/


/*int main() {
    float R, L, S;
    const float PI = 3.14;
    scanf("%f", &R);
    L = 2 * PI * R;
    S = PI * R * R;
    printf("%.2f %.2f\n", L, S);
    return 0;
}
*/


/*int main() {
    float a, b, avg;
    scanf("%f %f", &a, &b);
    avg = (a + b) / 2;
    printf("%.2f\n", avg);
    return 0;
}
*/


/*int main() {
    float a, b, geom;
    scanf("%f %f", &a, &b);
    geom = sqrt(a * b);
    printf("%.2f\n", geom);
    return 0;
}
*/


int main() {
    float a, b, sum, diff, prod, quot;
    scanf("%f %f", &a, &b);
    sum = a*a + b*b;
    diff = a*a - b*b;
    prod = a*a * b*b;
    quot = (a*a) / (b*b);
    printf("%.2f %.2f %.2f %.2f\n", sum, diff, prod, quot);
    return 0;
}

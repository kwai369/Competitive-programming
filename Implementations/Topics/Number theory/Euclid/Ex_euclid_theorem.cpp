/**
  * Description : This is extented euclid's theorem to find gcd of two numbers.
  * Source : AoPS Intro to number theory.
  */

int gcd(int a, int b){
    if(b == 0){ 
      return a;
    }
    return gcd(b, a % b);
}

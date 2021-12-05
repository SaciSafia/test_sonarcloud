#include <iostream>
 
void echange(int& val1, int& val2);
 
int main()
{
    int tab[4] = {9, 8, 3, 1}; // 2 valeurs à échanger
 
    for(int i = 0; i < 3; i++)        // on va jusqu'a taille du tableau - 1 (3)
        for(int i = 0; i < 3; i++)    // car tab[3 + 1] = tab[4] n'est pas défini !
            if(tab[i] > tab[i+1])
                echange(tab[i], tab[i+1]);
 
    std::cout << "les valeur de tab en ordre croissant vaut : " << std::endl;
    for(int i=0; i < 4; i++)
          std::cout << tab[i] << " ";
}
 
void echange(int& val1, int& val2)
{
 //   if(val1>val2){       Tu verifies 2 fois la meme chose !
        std::swap(val1, val2);
 //   }
}

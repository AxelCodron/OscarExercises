// Pour cet exercice, nous allons juste essayer de comprendre le principe de "main" et de la fonction "printf"
// Le main est tout simplement la fonction qui sera executée par ton compilateur
// Ainsi, un fichier sans main ne compilera tout simplement pas

// Le main doit également "return" un entier. Cela permet au compilateur de savoir si tout s'est bien passé ou non.
// En C, zéro veut dire "tout s'est bien passé", et tout autre nombre veut dire "il y a eu une erreur"
// C'est pour cela que la fonction main à cette tête : "int main(void)"
// "int" veut dire "je renvoie un entier", et "void" veut dire "je ne prends aucun argument".

// Passons maintenant à printf. Cette fonction permet d'afficher du texte dans le terminal.
// Par exemple, si tu écris "printf("Hello world !");", tu verras "Hello world !" s'afficher dans le terminal.
// Elle prend un argument "char*", ce qui est, en gros, une chaîne de caractères (un texte). N'oublie pas les guillemets !

// Consigne : écris un programme qui affiche "Exercise 1 réussi" dans le terminal
// Indice : chaque ligne de code dans une fonction doit se terminer par un point-virgule ";" !
// PS : ce premier exercice ne contient pas de tests, entraîne toi juste à compiler et exécuter ton programme !

#include <stdio.h> // On inclut la bibliothèque standard de C, qui contient notamment la fonction printf, mais t'occupe pas de ça pour l'instant

int main(void)
{
    // Tu peux écrire ton code ici !
    return 0;
}

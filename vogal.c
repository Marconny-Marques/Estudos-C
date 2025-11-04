void trocaVogalPorEspaco(char vogal[]) {
    int i = 0;
    while(vogal[i] != '\0') {
        char charactere = vogal[i];
        if (charactere == 'A' || charactere == 'a' || charactere == 'E' || charactere == 'e' || charactere == 'I' || charactere == 'i' || charactere == 'O' || charactere == 'o' || charactere == 'U' || charactere == 'u')
        {
            vogal[i] = ' ';
        }
        i++;
    }
    
}
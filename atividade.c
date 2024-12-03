// EOF --> fim de arquivo, é usado no while quando vc quer dizer: enquanto estiver lendo alguma coisa

int main(int argc, char const *argv[])
{
    fp1 = fopen("original.txt", "rt");
    fp2 = fopen("codifica.txt", "wt");
    
    
    codifice("original.txt", "codifi.txt", 3);

    

    return 0;
}

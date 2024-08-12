#VAR1 ""
short FUN1(short VAR2)
{
    fscanf (stdin, "", &VAR2);
    return VAR2;
}
void FUN2()
{
    short VAR2;
    VAR2 = 0;
    VAR2 = FUN1(VAR2);
    if (VAR2 < 100)
    {
        char * VAR3 = (char *)malloc(VAR2);
        if (VAR3 == NULL) {FUN3(-1);}
        memset(VAR3, '', VAR2-1);
        VAR3[VAR2-1] = '';
        FUN4(VAR3);
        free(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}
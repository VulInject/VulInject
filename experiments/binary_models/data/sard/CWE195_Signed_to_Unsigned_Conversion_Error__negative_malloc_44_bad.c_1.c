#VAR1 ""
void FUN1(int VAR2)
{
    if (VAR2 < 100)
    {
        char * VAR3 = (char *)malloc(VAR2);
        if (VAR3 == NULL) {FUN2(-1);}
        memset(VAR3, '', VAR2-1);
        VAR3[VAR2-1] = '';
        FUN3(VAR3);
        free(VAR3);
    }
}
void FUN4()
{
    int VAR2;
    void (*VAR4) (int) = VAR5;
    VAR2 = -1;
    VAR2 = -1;
    FUN5(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN4();
    return 0;
}
#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    if(VAR3==5)
    {
        VAR2 = FUN2();
    }
    if (VAR2 < 100)
    {
        char * VAR4 = (char *)malloc(VAR2);
        if (VAR4 == NULL) {FUN3(-1);}
        memset(VAR4, '', VAR2-1);
        VAR4[VAR2-1] = '';
        FUN4(VAR4);
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    int VAR4;
    VAR4 = -1;
    if(VAR2)
    {
        VAR4 = FUN2();
    }
    if (VAR4 < 100)
    {
        char * VAR5 = (char *)malloc(VAR4);
        if (VAR5 == NULL) {FUN3(-1);}
        memset(VAR5, '', VAR4-1);
        VAR5[VAR4-1] = '';
        FUN4(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
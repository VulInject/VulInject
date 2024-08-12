#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    {
        size_t VAR5;
        char VAR6[100];
        memset(VAR6, '', 100-1); 
        VAR6[100-1] = ''; 
        for (VAR5 = 0; VAR5 < 100; VAR5++)
        {
            VAR6[VAR5] = VAR4[VAR5];
        }
        VAR6[100-1] = '';
        FUN2(VAR6);
    }
}
void FUN3()
{
    char * VAR4;
    void (*VAR7) (char *) = VAR8;
    VAR4 = NULL;
    {
        char * VAR9 = (char *)malloc(100*sizeof(char));
        if (VAR9 == NULL) {FUN4(-1);}
        memset(VAR9, '', 100-1);
        VAR9[100-1] = '';
        VAR4 = VAR9 - 8;
    }
    FUN5(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}
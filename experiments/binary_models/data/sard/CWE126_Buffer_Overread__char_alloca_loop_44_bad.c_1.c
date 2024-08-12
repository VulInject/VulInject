#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    {
        size_t VAR5, VAR6;
        char VAR7[100];
        memset(VAR7, '', 100-1);
        VAR7[100-1] = ''; 
        VAR6 = strlen(VAR7);
        for (VAR5 = 0; VAR5 < VAR6; VAR5++)
        {
            VAR7[VAR5] = VAR4[VAR5];
        }
        VAR7[100-1] = '';
        FUN2(VAR7);
    }
}
void FUN3()
{
    char * VAR4;
    void (*VAR8) (char *) = VAR9;
    char * VAR10 = (char *)FUN4(50*sizeof(char));
    char * VAR11 = (char *)FUN4(100*sizeof(char));
    memset(VAR10, '', 50-1); 
    VAR10[50-1] = ''; 
    memset(VAR11, '', 100-1); 
    VAR11[100-1] = ''; 
    VAR4 = VAR10;
    FUN5(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}
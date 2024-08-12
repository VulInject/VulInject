#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    char * VAR6;
    char * VAR7 = (char *)FUN2(50*sizeof(char));
    char * VAR8 = (char *)FUN2(100*sizeof(char));
    memset(VAR7, '', 50-1); 
    VAR7[50-1] = ''; 
    memset(VAR8, '', 100-1); 
    VAR8[100-1] = ''; 
    if(VAR4)
    {
        VAR6 = VAR7;
    }
    {
        size_t VAR9, VAR10;
        char VAR11[100];
        memset(VAR11, '', 100-1);
        VAR11[100-1] = ''; 
        VAR10 = strlen(VAR11);
        for (VAR9 = 0; VAR9 < VAR10; VAR9++)
        {
            VAR11[VAR9] = VAR6[VAR9];
        }
        VAR11[100-1] = '';
        FUN3(VAR11);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
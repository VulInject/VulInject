#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char * VAR5 = (char *)FUN2(50*sizeof(char));
    char * VAR6 = (char *)FUN2(100*sizeof(char));
    memset(VAR5, '', 50-1); 
    VAR5[50-1] = ''; 
    memset(VAR6, '', 100-1); 
    VAR6[100-1] = ''; 
    if(FUN3())
    {
        VAR4 = VAR5;
    }
    else
    {
        VAR4 = VAR6;
    }
    {
        size_t VAR7, VAR8;
        char VAR9[100];
        memset(VAR9, '', 100-1);
        VAR9[100-1] = ''; 
        VAR8 = strlen(VAR9);
        for (VAR7 = 0; VAR7 < VAR8; VAR7++)
        {
            VAR9[VAR7] = VAR4[VAR7];
        }
        VAR9[100-1] = '';
        FUN4(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
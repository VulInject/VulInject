#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char VAR5[50];
    char VAR6[100];
    memset(VAR5, '', 50-1); 
    VAR5[50-1] = ''; 
    memset(VAR6, '', 100-1); 
    VAR6[100-1] = ''; 
    if(5==5)
    {
        VAR4 = VAR5;
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
        FUN2(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
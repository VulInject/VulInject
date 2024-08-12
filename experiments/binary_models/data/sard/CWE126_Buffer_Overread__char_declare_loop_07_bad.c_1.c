#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    char * VAR5;
    char VAR6[50];
    char VAR7[100];
    memset(VAR6, '', 50-1); 
    VAR6[50-1] = ''; 
    memset(VAR7, '', 100-1); 
    VAR7[100-1] = ''; 
    if(VAR4==5)
    {
        VAR5 = VAR6;
    }
    {
        size_t VAR8, VAR9;
        char VAR10[100];
        memset(VAR10, '', 100-1);
        VAR10[100-1] = ''; 
        VAR9 = strlen(VAR10);
        for (VAR8 = 0; VAR8 < VAR9; VAR8++)
        {
            VAR10[VAR8] = VAR5[VAR8];
        }
        VAR10[100-1] = '';
        FUN2(VAR10);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
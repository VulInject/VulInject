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
    VAR4 = VAR5;
    {
        char * VAR7 = VAR4;
        char * VAR4 = VAR7;
        {
            size_t VAR8, VAR9;
            char VAR10[100];
            memset(VAR10, '', 100-1);
            VAR10[100-1] = ''; 
            VAR9 = strlen(VAR10);
            for (VAR8 = 0; VAR8 < VAR9; VAR8++)
            {
                VAR10[VAR8] = VAR4[VAR8];
            }
            VAR10[100-1] = '';
            FUN2(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
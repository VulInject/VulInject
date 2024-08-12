#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char VAR5[50];
    char VAR6[100];
    VAR4 = VAR5;
    VAR4[0] = ''; 
    {
        char * VAR7 = VAR4;
        char * VAR4 = VAR7;
        {
            size_t VAR8;
            char VAR9[100];
            memset(VAR9, '', 100-1); 
            VAR9[100-1] = ''; 
            for (VAR8 = 0; VAR8 < 100; VAR8++)
            {
                VAR4[VAR8] = VAR9[VAR8];
            }
            VAR4[100-1] = ''; 
            FUN2(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
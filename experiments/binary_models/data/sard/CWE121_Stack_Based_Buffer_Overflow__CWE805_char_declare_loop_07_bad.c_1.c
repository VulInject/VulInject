#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    char * VAR5;
    char VAR6[50];
    char VAR7[100];
    if(VAR4==5)
    {
        VAR5 = VAR6;
        VAR5[0] = ''; 
    }
    {
        size_t VAR8;
        char VAR9[100];
        memset(VAR9, '', 100-1); 
        VAR9[100-1] = ''; 
        for (VAR8 = 0; VAR8 < 100; VAR8++)
        {
            VAR5[VAR8] = VAR9[VAR8];
        }
        VAR5[100-1] = ''; 
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
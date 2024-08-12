#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    char * VAR6;
    char VAR7[100];
    memset(VAR7, '', 100-1);
    VAR7[100-1] = '';
    if(VAR4)
    {
        VAR6 = VAR7 - 8;
    }
    {
        size_t VAR8;
        char VAR9[100];
        memset(VAR9, '', 100-1); 
        VAR9[100-1] = ''; 
        for (VAR8 = 0; VAR8 < 100; VAR8++)
        {
            VAR6[VAR8] = VAR9[VAR8];
        }
        VAR6[100-1] = '';
        FUN2(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#define CHAR_ARRAY_SIZE 8
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    short VAR4;
    VAR4 = 0;
    if(VAR2)
    {
        {
            char VAR5[VAR6] = "";
            if (fgets(VAR5, VAR6, stdin) != NULL)
            {
                VAR4 = (short)FUN2(VAR5);
            }
            else
            {
            }
        }
    }
    {
        char VAR7[100];
        char VAR8[100] = "";
        memset(VAR7, '', 100-1);
        VAR7[100-1] = '';
        if (VAR4 < 100)
        {
            memcpy(VAR8, VAR7, VAR4);
            VAR8[VAR4] = ''; 
        }
        FUN3(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
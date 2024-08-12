#VAR1 ""
#define CHAR_ARRAY_SIZE 8
int VAR2 = 5;
void FUN1()
{
    short VAR3;
    VAR3 = 0;
    if(VAR2==5)
    {
        {
            char VAR4[VAR5] = "";
            if (fgets(VAR4, VAR5, stdin) != NULL)
            {
                VAR3 = (short)FUN2(VAR4);
            }
            else
            {
            }
        }
    }
    {
        char VAR6[100];
        char VAR7[100] = "";
        memset(VAR6, '', 100-1);
        VAR6[100-1] = '';
        if (VAR3 < 100)
        {
            strncpy(VAR7, VAR6, VAR3);
            VAR7[VAR3] = ''; 
        }
        FUN3(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
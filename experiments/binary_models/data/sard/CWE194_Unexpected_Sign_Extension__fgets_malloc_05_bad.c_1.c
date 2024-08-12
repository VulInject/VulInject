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
    if (VAR4 < 100)
    {
        char * VAR7 = (char *)malloc(VAR4);
        if (VAR7 == NULL) {FUN3(-1);}
        memset(VAR7, '', VAR4-1);
        VAR7[VAR4-1] = '';
        FUN4(VAR7);
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
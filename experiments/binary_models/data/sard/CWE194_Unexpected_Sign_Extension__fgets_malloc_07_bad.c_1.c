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
    if (VAR3 < 100)
    {
        char * VAR6 = (char *)malloc(VAR3);
        if (VAR6 == NULL) {FUN3(-1);}
        memset(VAR6, '', VAR3-1);
        VAR6[VAR3-1] = '';
        FUN4(VAR6);
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
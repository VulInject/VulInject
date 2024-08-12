#VAR1 ""
#define CHAR_ARRAY_SIZE 8
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    if(1)
    {
        {
            char VAR3[VAR4] = "";
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                VAR2 = (short)FUN2(VAR3);
            }
            else
            {
            }
        }
    }
    if (VAR2 < 100)
    {
        char * VAR5 = (char *)malloc(VAR2);
        if (VAR5 == NULL) {FUN3(-1);}
        memset(VAR5, '', VAR2-1);
        VAR5[VAR2-1] = '';
        FUN4(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#define CHAR_ARRAY_SIZE 8
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    if(FUN2())
    {
        {
            char VAR3[VAR4] = "";
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                VAR2 = (short)FUN3(VAR3);
            }
            else
            {
            }
        }
    }
    if (VAR2 < 100)
    {
        char * VAR5 = (char *)malloc(VAR2);
        if (VAR5 == NULL) {FUN4(-1);}
        memset(VAR5, '', VAR2-1);
        VAR5[VAR2-1] = '';
        FUN5(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}
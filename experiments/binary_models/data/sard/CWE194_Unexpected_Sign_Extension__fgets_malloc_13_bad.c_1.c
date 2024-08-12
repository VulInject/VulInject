#VAR1 ""
#define CHAR_ARRAY_SIZE 8
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    if(VAR3==5)
    {
        {
            char VAR4[VAR5] = "";
            if (fgets(VAR4, VAR5, stdin) != NULL)
            {
                VAR2 = (short)FUN2(VAR4);
            }
            else
            {
            }
        }
    }
    if (VAR2 < 100)
    {
        char * VAR6 = (char *)malloc(VAR2);
        if (VAR6 == NULL) {FUN3(-1);}
        memset(VAR6, '', VAR2-1);
        VAR6[VAR2-1] = '';
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
#VAR1 ""
#define CHAR_ARRAY_SIZE 8
void FUN1()
{
    short VAR2;
    short *VAR3 = &VAR2;
    short *VAR4 = &VAR2;
    VAR2 = 0;
    {
        short VAR2 = *VAR3;
        {
            char VAR5[VAR6] = "";
            if (fgets(VAR5, VAR6, stdin) != NULL)
            {
                VAR2 = (short)FUN2(VAR5);
            }
            else
            {
            }
        }
        *VAR3 = VAR2;
    }
    {
        short VAR2 = *VAR4;
        if (VAR2 < 100)
        {
            char * VAR7 = (char *)malloc(VAR2);
            if (VAR7 == NULL) {FUN3(-1);}
            memset(VAR7, '', VAR2-1);
            VAR7[VAR2-1] = '';
            FUN4(VAR7);
            free(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
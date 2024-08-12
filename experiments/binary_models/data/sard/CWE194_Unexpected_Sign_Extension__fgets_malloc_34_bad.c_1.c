#VAR1 ""
#define CHAR_ARRAY_SIZE 8
typedef union
{
    short VAR2;
    short VAR3;
} VAR4;
void FUN1()
{
    short VAR5;
    CWE194_Unexpected_Sign_Extension__fgets_malloc_34_unionType VAR6;
    VAR5 = 0;
    {
        char VAR7[VAR8] = "";
        if (fgets(VAR7, VAR8, stdin) != NULL)
        {
            VAR5 = (short)FUN2(VAR7);
        }
        else
        {
        }
    }
    VAR6.VAR2 = VAR5;
    {
        short VAR5 = VAR6.VAR3;
        if (VAR5 < 100)
        {
            char * VAR9 = (char *)malloc(VAR5);
            if (VAR9 == NULL) {FUN3(-1);}
            memset(VAR9, '', VAR5-1);
            VAR9[VAR5-1] = '';
            FUN4(VAR9);
            free(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
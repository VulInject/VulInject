#VAR1 ""
typedef union
{
    short VAR2;
    short VAR3;
} VAR4;
void FUN1()
{
    short VAR5;
    CWE194_Unexpected_Sign_Extension__rand_malloc_34_unionType VAR6;
    VAR5 = 0;
    VAR5 = (short)FUN2();
    VAR6.VAR2 = VAR5;
    {
        short VAR5 = VAR6.VAR3;
        if (VAR5 < 100)
        {
            char * VAR7 = (char *)malloc(VAR5);
            if (VAR7 == NULL) {FUN3(-1);}
            memset(VAR7, '', VAR5-1);
            VAR7[VAR5-1] = '';
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
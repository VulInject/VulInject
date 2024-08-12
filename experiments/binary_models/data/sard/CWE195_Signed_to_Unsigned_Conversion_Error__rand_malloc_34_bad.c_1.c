#VAR1 ""
typedef union
{
    int VAR2;
    int VAR3;
} VAR4;
void FUN1()
{
    int VAR5;
    CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_34_unionType VAR6;
    VAR5 = -1;
    VAR5 = FUN2();
    VAR6.VAR2 = VAR5;
    {
        int VAR5 = VAR6.VAR3;
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
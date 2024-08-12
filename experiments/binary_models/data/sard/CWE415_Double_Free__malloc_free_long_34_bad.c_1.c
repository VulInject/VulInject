#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    long * VAR4;
    long * VAR5;
} VAR6;
void FUN1()
{
    long * VAR7;
    CWE415_Double_Free__malloc_free_long_34_unionType VAR8;
    VAR7 = NULL;
    VAR7 = (long *)malloc(100*sizeof(long));
    if (VAR7 == NULL) {FUN2(-1);}
    free(VAR7);
    VAR8.VAR4 = VAR7;
    {
        long * VAR7 = VAR8.VAR5;
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
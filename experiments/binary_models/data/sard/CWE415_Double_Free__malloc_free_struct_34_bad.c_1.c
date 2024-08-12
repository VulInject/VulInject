#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    VAR4 * VAR5;
    VAR4 * VAR6;
} VAR7;
void FUN1()
{
    VAR4 * VAR8;
    CWE415_Double_Free__malloc_free_struct_34_unionType VAR9;
    VAR8 = NULL;
    VAR8 = (VAR4 *)malloc(100*sizeof(VAR4));
    if (VAR8 == NULL) {FUN2(-1);}
    free(VAR8);
    VAR9.VAR5 = VAR8;
    {
        VAR4 * VAR8 = VAR9.VAR6;
        free(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
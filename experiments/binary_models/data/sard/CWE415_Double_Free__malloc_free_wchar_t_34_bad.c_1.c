#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    wchar_t * VAR4;
    wchar_t * VAR5;
} VAR6;
void FUN1()
{
    wchar_t * VAR7;
    CWE415_Double_Free__malloc_free_wchar_t_34_unionType VAR8;
    VAR7 = NULL;
    VAR7 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR7 == NULL) {FUN2(-1);}
    free(VAR7);
    VAR8.VAR4 = VAR7;
    {
        wchar_t * VAR7 = VAR8.VAR5;
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
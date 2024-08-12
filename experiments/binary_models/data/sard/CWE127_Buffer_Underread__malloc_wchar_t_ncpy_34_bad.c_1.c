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
    CWE127_Buffer_Underread__malloc_wchar_t_ncpy_34_unionType VAR8;
    VAR7 = NULL;
    {
        wchar_t * VAR9 = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (VAR9 == NULL) {FUN2(-1);}
        wmemset(VAR9, VAR10'', 100-1);
        VAR9[100-1] = VAR10'';
        VAR7 = VAR9 - 8;
    }
    VAR8.VAR4 = VAR7;
    {
        wchar_t * VAR7 = VAR8.VAR5;
        {
            wchar_t VAR11[100];
            wmemset(VAR11, VAR10'', 100-1); 
            VAR11[100-1] = VAR10''; 
            wcsncpy(VAR11, VAR7, wcslen(VAR11));
            VAR11[100-1] = VAR10'';
            FUN3(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
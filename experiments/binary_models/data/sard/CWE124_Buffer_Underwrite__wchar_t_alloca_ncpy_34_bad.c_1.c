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
    CWE124_Buffer_Underwrite__wchar_t_alloca_ncpy_34_unionType VAR8;
    wchar_t * VAR9 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR9, VAR10'', 100-1);
    VAR9[100-1] = VAR10'';
    VAR7 = VAR9 - 8;
    VAR8.VAR4 = VAR7;
    {
        wchar_t * VAR7 = VAR8.VAR5;
        {
            wchar_t VAR11[100];
            wmemset(VAR11, VAR10'', 100-1); 
            VAR11[100-1] = VAR10''; 
            wcsncpy(VAR7, VAR11, 100-1);
            VAR7[100-1] = VAR10'';
            FUN3(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
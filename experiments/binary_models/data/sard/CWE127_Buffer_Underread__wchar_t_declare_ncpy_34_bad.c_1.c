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
    CWE127_Buffer_Underread__wchar_t_declare_ncpy_34_unionType VAR8;
    wchar_t VAR9[100];
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
            wcsncpy(VAR11, VAR7, wcslen(VAR11));
            VAR11[100-1] = VAR10'';
            FUN2(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
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
    CWE126_Buffer_Overread__wchar_t_alloca_memmove_34_unionType VAR8;
    wchar_t * VAR9 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR10 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR9, VAR11'', 50-1); 
    VAR9[50-1] = VAR11''; 
    wmemset(VAR10, VAR11'', 100-1); 
    VAR10[100-1] = VAR11''; 
    VAR7 = VAR9;
    VAR8.VAR4 = VAR7;
    {
        wchar_t * VAR7 = VAR8.VAR5;
        {
            wchar_t VAR12[100];
            wmemset(VAR12, VAR11'', 100-1);
            VAR12[100-1] = VAR11''; 
            memmove(VAR12, VAR7, wcslen(VAR12)*sizeof(wchar_t));
            VAR12[100-1] = VAR11'';
            FUN3(VAR12);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
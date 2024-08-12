#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    {
        size_t VAR5;
        wchar_t VAR6[100];
        wmemset(VAR6, VAR7'', 100-1); 
        VAR6[100-1] = VAR7''; 
        VAR5 = wcslen(VAR6);
        wcsncat(VAR4, VAR6, VAR5);
        FUN2(VAR4);
    }
}
void FUN3()
{
    wchar_t * VAR4;
    wchar_t VAR8[100];
    VAR4 = VAR8;
    ; 
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}
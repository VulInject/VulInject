#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t VAR5[100];
    VAR4 = VAR5;
    goto VAR6;
VAR6:
    ; 
    {
        size_t VAR7;
        wchar_t VAR6[100];
        wmemset(VAR6, VAR8'', 100-1); 
        VAR6[100-1] = VAR8''; 
        VAR7 = wcslen(VAR6);
        wcsncat(VAR4, VAR6, VAR7);
        FUN2(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
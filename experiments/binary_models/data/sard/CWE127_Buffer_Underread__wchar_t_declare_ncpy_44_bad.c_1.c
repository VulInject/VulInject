#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    {
        wchar_t VAR5[100];
        wmemset(VAR5, VAR6'', 100-1); 
        VAR5[100-1] = VAR6''; 
        wcsncpy(VAR5, VAR4, wcslen(VAR5));
        VAR5[100-1] = VAR6'';
        FUN2(VAR5);
    }
}
void FUN3()
{
    wchar_t * VAR4;
    void (*VAR7) (wchar_t *) = VAR8;
    wchar_t VAR9[100];
    wmemset(VAR9, VAR6'', 100-1);
    VAR9[100-1] = VAR6'';
    VAR4 = VAR9 - 8;
    FUN4(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    {
        wchar_t VAR5[100];
        wmemset(VAR5, VAR6'', 100-1);
        VAR5[100-1] = VAR6''; 
        memmove(VAR5, VAR4, wcslen(VAR5)*sizeof(wchar_t));
        VAR5[100-1] = VAR6'';
        FUN2(VAR5);
    }
}
void FUN3()
{
    wchar_t * VAR4;
    void (*VAR7) (wchar_t *) = VAR8;
    wchar_t * VAR9 = (wchar_t *)FUN4(50*sizeof(wchar_t));
    wchar_t * VAR10 = (wchar_t *)FUN4(100*sizeof(wchar_t));
    wmemset(VAR9, VAR6'', 50-1); 
    VAR9[50-1] = VAR6''; 
    wmemset(VAR10, VAR6'', 100-1); 
    VAR10[100-1] = VAR6''; 
    VAR4 = VAR9;
    FUN5(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}
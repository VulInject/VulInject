#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t * VAR5 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR6 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR5, VAR7'', 50-1); 
    VAR5[50-1] = VAR7''; 
    wmemset(VAR6, VAR7'', 100-1); 
    VAR6[100-1] = VAR7''; 
    if(VAR8==5)
    {
        VAR4 = VAR5;
    }
    {
        wchar_t VAR9[100];
        wmemset(VAR9, VAR7'', 100-1);
        VAR9[100-1] = VAR7''; 
        memcpy(VAR9, VAR4, wcslen(VAR9)*sizeof(wchar_t));
        VAR9[100-1] = VAR7'';
        FUN3(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
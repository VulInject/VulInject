#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t * *VAR5 = &VAR4;
    wchar_t * *VAR6 = &VAR4;
    wchar_t * VAR7 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR8 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR7, VAR9'', 50-1); 
    VAR7[50-1] = VAR9''; 
    wmemset(VAR8, VAR9'', 100-1); 
    VAR8[100-1] = VAR9''; 
    {
        wchar_t * VAR4 = *VAR5;
        VAR4 = VAR7;
        *VAR5 = VAR4;
    }
    {
        wchar_t * VAR4 = *VAR6;
        {
            wchar_t VAR10[100];
            wmemset(VAR10, VAR9'', 100-1);
            VAR10[100-1] = VAR9''; 
            memmove(VAR10, VAR4, wcslen(VAR10)*sizeof(wchar_t));
            VAR10[100-1] = VAR9'';
            FUN3(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
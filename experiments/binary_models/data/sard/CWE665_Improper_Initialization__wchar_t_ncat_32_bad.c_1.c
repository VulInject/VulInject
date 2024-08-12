#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t * *VAR5 = &VAR4;
    wchar_t * *VAR6 = &VAR4;
    wchar_t VAR7[100];
    VAR4 = VAR7;
    {
        wchar_t * VAR4 = *VAR5;
        ; 
        *VAR5 = VAR4;
    }
    {
        wchar_t * VAR4 = *VAR6;
        {
            size_t VAR8;
            wchar_t VAR9[100];
            wmemset(VAR9, VAR10'', 100-1); 
            VAR9[100-1] = VAR10''; 
            VAR8 = wcslen(VAR9);
            wcsncat(VAR4, VAR9, VAR8);
            FUN2(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
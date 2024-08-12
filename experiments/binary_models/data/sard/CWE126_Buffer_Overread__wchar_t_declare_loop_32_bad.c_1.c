#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t * *VAR5 = &VAR4;
    wchar_t * *VAR6 = &VAR4;
    wchar_t VAR7[50];
    wchar_t VAR8[100];
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
            size_t VAR10, VAR11;
            wchar_t VAR12[100];
            wmemset(VAR12, VAR9'', 100-1);
            VAR12[100-1] = VAR9''; 
            VAR11 = wcslen(VAR12);
            for (VAR10 = 0; VAR10 < VAR11; VAR10++)
            {
                VAR12[VAR10] = VAR4[VAR10];
            }
            VAR12[100-1] = VAR9'';
            FUN2(VAR12);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
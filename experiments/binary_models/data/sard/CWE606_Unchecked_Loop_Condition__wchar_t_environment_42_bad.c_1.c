#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
wchar_t * FUN1(wchar_t * VAR5)
{
    {
        size_t VAR6 = wcslen(VAR5);
        wchar_t * VAR7 = FUN2(VAR8);
        if (VAR7 != NULL)
        {
            wcsncat(VAR5+VAR6, VAR7, 100-VAR6-1);
        }
    }
    return VAR5;
}
void FUN3()
{
    wchar_t * VAR5;
    wchar_t VAR9[100] = VAR4"";
    VAR5 = VAR9;
    VAR5 = FUN1(VAR5);
    {
        int VAR10, VAR11, VAR12;
        if (swscanf(VAR5, VAR4"", &VAR11) == 1)
        {
            VAR12 = 0;
            for (VAR10 = 0; VAR10 < VAR11; VAR10++)
            {
                VAR12++; 
            }
            FUN4(VAR12);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
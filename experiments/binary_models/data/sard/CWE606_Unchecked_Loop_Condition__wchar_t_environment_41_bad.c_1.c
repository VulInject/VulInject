#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
void FUN1(wchar_t * VAR5)
{
    {
        int VAR6, VAR7, VAR8;
        if (swscanf(VAR5, VAR4"", &VAR7) == 1)
        {
            VAR8 = 0;
            for (VAR6 = 0; VAR6 < VAR7; VAR6++)
            {
                VAR8++; 
            }
            FUN2(VAR8);
        }
    }
}
void FUN3()
{
    wchar_t * VAR5;
    wchar_t VAR9[100] = VAR4"";
    VAR5 = VAR9;
    {
        size_t VAR10 = wcslen(VAR5);
        wchar_t * VAR11 = FUN4(VAR12);
        if (VAR11 != NULL)
        {
            wcsncat(VAR5+VAR10, VAR11, 100-VAR10-1);
        }
    }
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
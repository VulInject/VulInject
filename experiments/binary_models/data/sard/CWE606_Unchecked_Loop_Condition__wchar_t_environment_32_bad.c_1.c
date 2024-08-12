#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
void FUN1()
{
    wchar_t * VAR5;
    wchar_t * *VAR6 = &VAR5;
    wchar_t * *VAR7 = &VAR5;
    wchar_t VAR8[100] = VAR4"";
    VAR5 = VAR8;
    {
        wchar_t * VAR5 = *VAR6;
        {
            size_t VAR9 = wcslen(VAR5);
            wchar_t * VAR10 = FUN2(VAR11);
            if (VAR10 != NULL)
            {
                wcsncat(VAR5+VAR9, VAR10, 100-VAR9-1);
            }
        }
        *VAR6 = VAR5;
    }
    {
        wchar_t * VAR5 = *VAR7;
        {
            int VAR12, VAR13, VAR14;
            if (swscanf(VAR5, VAR4"", &VAR13) == 1)
            {
                VAR14 = 0;
                for (VAR12 = 0; VAR12 < VAR13; VAR12++)
                {
                    VAR14++; 
                }
                FUN3(VAR14);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
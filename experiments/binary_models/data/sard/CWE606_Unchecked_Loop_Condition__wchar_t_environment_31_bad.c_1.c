#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[100] = VAR4"";
    VAR5 = VAR6;
    {
        size_t VAR7 = wcslen(VAR5);
        wchar_t * VAR8 = FUN2(VAR9);
        if (VAR8 != NULL)
        {
            wcsncat(VAR5+VAR7, VAR8, 100-VAR7-1);
        }
    }
    {
        wchar_t * VAR10 = VAR5;
        wchar_t * VAR5 = VAR10;
        {
            int VAR11, VAR12, VAR13;
            if (swscanf(VAR5, VAR4"", &VAR12) == 1)
            {
                VAR13 = 0;
                for (VAR11 = 0; VAR11 < VAR12; VAR11++)
                {
                    VAR13++; 
                }
                FUN3(VAR13);
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
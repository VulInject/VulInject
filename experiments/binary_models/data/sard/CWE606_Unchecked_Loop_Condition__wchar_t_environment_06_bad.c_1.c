#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
static const int VAR5 = 5;
void FUN1()
{
    wchar_t * VAR6;
    wchar_t VAR7[100] = VAR4"";
    VAR6 = VAR7;
    if(VAR5==5)
    {
        {
            size_t VAR8 = wcslen(VAR6);
            wchar_t * VAR9 = FUN2(VAR10);
            if (VAR9 != NULL)
            {
                wcsncat(VAR6+VAR8, VAR9, 100-VAR8-1);
            }
        }
    }
    if(VAR5==5)
    {
        {
            int VAR11, VAR12, VAR13;
            if (swscanf(VAR6, VAR4"", &VAR12) == 1)
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
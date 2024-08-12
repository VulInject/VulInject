#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#VAR1 <VAR5.VAR3>
static const int VAR6 = 5;
void FUN1()
{
    wchar_t * VAR7;
    wchar_t VAR8[100] = VAR9"";
    VAR7 = VAR8;
    if(VAR6==5)
    {
        {
            size_t VAR10 = wcslen(VAR7);
            VAR11 * VAR12;
            if (100-VAR10 > 1)
            {
                VAR12 = fopen(VAR4, "");
                if (VAR12 != NULL)
                {
                    if (FUN2(VAR7+VAR10, (int)(100-VAR10), VAR12) == NULL)
                    {
                        VAR7[VAR10] = VAR9'';
                    }
                    fclose(VAR12);
                }
            }
        }
    }
    {
        HMODULE VAR13;
        VAR13 = LoadLibraryW(VAR7);
        if (VAR13 != NULL)
        {
            FUN3(VAR13);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
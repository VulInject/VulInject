#VAR1 ""
#VAR1 <VAR2.VAR3>
#define NEW_PATH VAR4""
#define PUTENV VAR5
#define NEW_PATH VAR4""
#define PUTENV VAR6
#define VAR7 ""
#define VAR7 ""
void FUN1()
{
    wchar_t * VAR8;
    wchar_t VAR9[250] = VAR4"";
    VAR8 = VAR9;
    if(FUN2())
    {
        {
            size_t VAR10 = wcslen(VAR8);
            VAR11 * VAR12;
            if (250-VAR10 > 1)
            {
                VAR12 = fopen(VAR7, "");
                if (VAR12 != NULL)
                {
                    if (FUN3(VAR8+VAR10, (int)(250-VAR10), VAR12) == NULL)
                    {
                        VAR8[VAR10] = VAR4'';
                    }
                    fclose(VAR12);
                }
            }
        }
    }
    else
    {
        wcscat(VAR8, VAR13);
    }
    FUN4(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
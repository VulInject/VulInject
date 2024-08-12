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
    if(VAR10)
    {
        {
            size_t VAR11 = wcslen(VAR8);
            VAR12 * VAR13;
            if (250-VAR11 > 1)
            {
                VAR13 = fopen(VAR7, "");
                if (VAR13 != NULL)
                {
                    if (FUN2(VAR8+VAR11, (int)(250-VAR11), VAR13) == NULL)
                    {
                        VAR8[VAR11] = VAR4'';
                    }
                    fclose(VAR13);
                }
            }
        }
    }
    FUN3(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
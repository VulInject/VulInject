#VAR1 ""
#VAR1 <VAR2.VAR3>
#define NEW_PATH VAR4""
#define PUTENV VAR5
#define NEW_PATH VAR4""
#define PUTENV VAR6
#define VAR7 ""
#define VAR7 ""
static const int VAR8 = 5;
void FUN1()
{
    wchar_t * VAR9;
    wchar_t VAR10[250] = VAR4"";
    VAR9 = VAR10;
    if(VAR8==5)
    {
        {
            size_t VAR11 = wcslen(VAR9);
            VAR12 * VAR13;
            if (250-VAR11 > 1)
            {
                VAR13 = fopen(VAR7, "");
                if (VAR13 != NULL)
                {
                    if (FUN2(VAR9+VAR11, (int)(250-VAR11), VAR13) == NULL)
                    {
                        VAR9[VAR11] = VAR4'';
                    }
                    fclose(VAR13);
                }
            }
        }
    }
    FUN3(VAR9);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
#define NEW_PATH VAR4""
#define PUTENV VAR5
#define NEW_PATH VAR4""
#define PUTENV VAR6
#define VAR7 ""
#define VAR7 ""
int VAR8 = 1; 
int VAR9 = 0; 
void FUN1()
{
    wchar_t * VAR10;
    wchar_t VAR11[250] = VAR4"";
    VAR10 = VAR11;
    if(VAR8)
    {
        {
            size_t VAR12 = wcslen(VAR10);
            VAR13 * VAR14;
            if (250-VAR12 > 1)
            {
                VAR14 = fopen(VAR7, "");
                if (VAR14 != NULL)
                {
                    if (FUN2(VAR10+VAR12, (int)(250-VAR12), VAR14) == NULL)
                    {
                        VAR10[VAR12] = VAR4'';
                    }
                    fclose(VAR14);
                }
            }
        }
    }
    FUN3(VAR10);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
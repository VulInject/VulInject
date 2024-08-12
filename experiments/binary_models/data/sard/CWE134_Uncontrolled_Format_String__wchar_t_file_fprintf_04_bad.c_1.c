#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
static const int VAR5 = 1; 
static const int VAR6 = 0; 
void FUN1()
{
    wchar_t * VAR7;
    wchar_t VAR8[100] = VAR9"";
    VAR7 = VAR8;
    if(VAR5)
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
    if(VAR5)
    {
        fwprintf(VAR13, VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
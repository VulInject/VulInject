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
    switch(6)
    {
    case 6:
    {
        size_t VAR10 = wcslen(VAR8);
        VAR11 * VAR12;
        if (250-VAR10 > 1)
        {
            VAR12 = fopen(VAR7, "");
            if (VAR12 != NULL)
            {
                if (FUN2(VAR8+VAR10, (int)(250-VAR10), VAR12) == NULL)
                {
                    VAR8[VAR10] = VAR4'';
                }
                fclose(VAR12);
            }
        }
    }
    break;
    default:
        break;
    }
    FUN3(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
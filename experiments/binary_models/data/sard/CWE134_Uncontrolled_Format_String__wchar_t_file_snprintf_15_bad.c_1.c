#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[100] = VAR7"";
    VAR5 = VAR6;
    switch(6)
    {
    case 6:
    {
        size_t VAR8 = wcslen(VAR5);
        VAR9 * VAR10;
        if (100-VAR8 > 1)
        {
            VAR10 = fopen(VAR4, "");
            if (VAR10 != NULL)
            {
                if (FUN2(VAR5+VAR8, (int)(100-VAR8), VAR10) == NULL)
                {
                    VAR5[VAR8] = VAR7'';
                }
                fclose(VAR10);
            }
        }
    }
    break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
    {
        wchar_t VAR11[100] = VAR7"";
        FUN3(VAR11, 100-1, VAR5);
        FUN4(VAR11);
    }
    break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
void FUN1()
{
    wchar_t * VAR4;
    wchar_t VAR5[100] = VAR6"";
    VAR4 = VAR5;
    switch(6)
    {
    case 6:
    {
        size_t VAR7 = wcslen(VAR4);
        if (100-VAR7 > 1)
        {
            if (FUN2(VAR4+VAR7, (int)(100-VAR7), stdin) != NULL)
            {
                VAR7 = wcslen(VAR4);
                if (VAR7 > 0 && VAR4[VAR7-1] == VAR6'')
                {
                    VAR4[VAR7-1] = VAR6'';
                }
            }
            else
            {
                VAR4[VAR7] = VAR6'';
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
        wchar_t VAR8[100] = VAR6"";
        FUN3(VAR8, 100-1, VAR4);
        FUN4(VAR8);
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
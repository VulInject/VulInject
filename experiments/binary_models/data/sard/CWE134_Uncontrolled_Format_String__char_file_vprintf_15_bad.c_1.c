#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define VAR5 ""
void FUN1(char * VAR6, ...)
{
    {
        va_list VAR7;
        FUN2(VAR7, VAR6);
        FUN3(VAR6, VAR7);
        FUN4(VAR7);
    }
}
void FUN5()
{
    char * VAR6;
    char VAR8[100] = "";
    VAR6 = VAR8;
    switch(6)
    {
    case 6:
    {
        size_t VAR9 = strlen(VAR6);
        VAR10 * VAR11;
        if (100-VAR9 > 1)
        {
            VAR11 = fopen(VAR5, "");
            if (VAR11 != NULL)
            {
                if (fgets(VAR6+VAR9, (int)(100-VAR9), VAR11) == NULL)
                {
                    VAR6[VAR9] = '';
                }
                fclose(VAR11);
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
        FUN1(VAR6, VAR6);
        break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN5();
    return 0;
}
#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define VAR5 ""
static const int VAR6 = 5;
void FUN1(char * VAR7, ...)
{
    {
        va_list VAR8;
        FUN2(VAR8, VAR7);
        FUN3(VAR9, VAR7, VAR8);
        FUN4(VAR8);
    }
}
void FUN5()
{
    char * VAR7;
    char VAR10[100] = "";
    VAR7 = VAR10;
    if(VAR6==5)
    {
        {
            size_t VAR11 = strlen(VAR7);
            VAR12 * VAR13;
            if (100-VAR11 > 1)
            {
                VAR13 = fopen(VAR5, "");
                if (VAR13 != NULL)
                {
                    if (fgets(VAR7+VAR11, (int)(100-VAR11), VAR13) == NULL)
                    {
                        VAR7[VAR11] = '';
                    }
                    fclose(VAR13);
                }
            }
        }
    }
    if(VAR6==5)
    {
        FUN1(VAR7, VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN5();
    return 0;
}
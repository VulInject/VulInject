#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define VAR5 ""
static const int VAR6 = 1; 
static const int VAR7 = 0; 
void FUN1(char * VAR8, ...)
{
    {
        va_list VAR9;
        FUN2(VAR9, VAR8);
        FUN3(VAR8, VAR9);
        FUN4(VAR9);
    }
}
void FUN5()
{
    char * VAR8;
    char VAR10[100] = "";
    VAR8 = VAR10;
    if(VAR6)
    {
        {
            size_t VAR11 = strlen(VAR8);
            VAR12 * VAR13;
            if (100-VAR11 > 1)
            {
                VAR13 = fopen(VAR5, "");
                if (VAR13 != NULL)
                {
                    if (fgets(VAR8+VAR11, (int)(100-VAR11), VAR13) == NULL)
                    {
                        VAR8[VAR11] = '';
                    }
                    fclose(VAR13);
                }
            }
        }
    }
    if(VAR6)
    {
        FUN1(VAR8, VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN5();
    return 0;
}
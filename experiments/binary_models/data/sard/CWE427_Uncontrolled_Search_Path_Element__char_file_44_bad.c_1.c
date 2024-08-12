#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define PUTENV VAR5
#define VAR4 ""
#define PUTENV VAR6
#define VAR7 ""
#define VAR7 ""
void FUN1(char * VAR8)
{
    FUN2(VAR8);
}
void FUN3()
{
    char * VAR8;
    void (*VAR9) (char *) = VAR10;
    char VAR11[250] = "";
    VAR8 = VAR11;
    {
        size_t VAR12 = strlen(VAR8);
        VAR13 * VAR14;
        if (250-VAR12 > 1)
        {
            VAR14 = fopen(VAR7, "");
            if (VAR14 != NULL)
            {
                if (fgets(VAR8+VAR12, (int)(250-VAR12), VAR14) == NULL)
                {
                    VAR8[VAR12] = '';
                }
                fclose(VAR14);
            }
        }
    }
    FUN4(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
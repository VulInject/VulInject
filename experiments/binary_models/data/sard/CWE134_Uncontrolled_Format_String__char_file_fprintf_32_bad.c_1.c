#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
void FUN1()
{
    char * VAR5;
    char * *VAR6 = &VAR5;
    char * *VAR7 = &VAR5;
    char VAR8[100] = "";
    VAR5 = VAR8;
    {
        char * VAR5 = *VAR6;
        {
            size_t VAR9 = strlen(VAR5);
            VAR10 * VAR11;
            if (100-VAR9 > 1)
            {
                VAR11 = fopen(VAR4, "");
                if (VAR11 != NULL)
                {
                    if (fgets(VAR5+VAR9, (int)(100-VAR9), VAR11) == NULL)
                    {
                        VAR5[VAR9] = '';
                    }
                    fclose(VAR11);
                }
            }
        }
        *VAR6 = VAR5;
    }
    {
        char * VAR5 = *VAR7;
        fprintf(VAR12, VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN2(NULL) );
    FUN1();
    return 0;
}
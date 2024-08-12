#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
void FUN1(char * VAR5)
{
    fprintf(VAR6, VAR5);
}
void FUN2()
{
    char * VAR5;
    char VAR7[100] = "";
    VAR5 = VAR7;
    {
        size_t VAR8 = strlen(VAR5);
        VAR9 * VAR10;
        if (100-VAR8 > 1)
        {
            VAR10 = fopen(VAR4, "");
            if (VAR10 != NULL)
            {
                if (fgets(VAR5+VAR8, (int)(100-VAR8), VAR10) == NULL)
                {
                    VAR5[VAR8] = '';
                }
                fclose(VAR10);
            }
        }
    }
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN2();
    return 0;
}
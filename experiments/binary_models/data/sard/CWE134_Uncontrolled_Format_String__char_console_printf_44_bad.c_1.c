#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    FUN2(VAR4);
}
void FUN3()
{
    char * VAR4;
    void (*VAR5) (char *) = VAR6;
    char VAR7[100] = "";
    VAR4 = VAR7;
    {
        size_t VAR8 = strlen(VAR4);
        if (100-VAR8 > 1)
        {
            if (fgets(VAR4+VAR8, (int)(100-VAR8), stdin) != NULL)
            {
                VAR8 = strlen(VAR4);
                if (VAR8 > 0 && VAR4[VAR8-1] == '')
                {
                    VAR4[VAR8-1] = '';
                }
            }
            else
            {
                VAR4[VAR8] = '';
            }
        }
    }
    FUN4(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
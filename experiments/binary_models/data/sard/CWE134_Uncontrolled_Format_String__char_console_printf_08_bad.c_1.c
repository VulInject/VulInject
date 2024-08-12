#VAR1 ""
#VAR1 <VAR2.VAR3>
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    char * VAR4;
    char VAR5[100] = "";
    VAR4 = VAR5;
    if(FUN1())
    {
        {
            size_t VAR6 = strlen(VAR4);
            if (100-VAR6 > 1)
            {
                if (fgets(VAR4+VAR6, (int)(100-VAR6), stdin) != NULL)
                {
                    VAR6 = strlen(VAR4);
                    if (VAR6 > 0 && VAR4[VAR6-1] == '')
                    {
                        VAR4[VAR6-1] = '';
                    }
                }
                else
                {
                    VAR4[VAR6] = '';
                }
            }
        }
    }
    if(FUN1())
    {
        FUN4(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
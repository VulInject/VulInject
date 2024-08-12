#VAR1 ""
void FUN1()
{
    char VAR2;
    VAR2 = '';
    if(FUN2())
    {
        fscanf (stdin, "", &VAR2);
    }
    else
    {
        VAR2 = 2;
    }
    if(FUN2())
    {
        if(VAR2 > 0) 
        {
            char VAR3 = VAR2 * 2;
            FUN3(VAR3);
        }
    }
    else
    {
        if(VAR2 > 0) 
        {
            if (VAR2 < (VAR4/2))
            {
                char VAR3 = VAR2 * 2;
                FUN3(VAR3);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
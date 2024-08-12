#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            char VAR2[100] = "";
            char * VAR3 = VAR2;
            if (fgets(VAR3, 100, stdin) == NULL)
            {
            }
            FUN3(VAR3);
        }
    }
    else
    {
        {
            char VAR2[100] = "";
            char * VAR3 = VAR2;
            if (fgets(VAR3, 100, stdin) == NULL)
            {
                FUN4(1);
            }
            FUN3(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
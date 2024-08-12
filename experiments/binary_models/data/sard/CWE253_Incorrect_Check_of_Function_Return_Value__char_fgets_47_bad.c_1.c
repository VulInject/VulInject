#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(FUN2())
    {
        {
            char VAR4[100] = "";
            char * VAR5 = VAR4;
            if (fgets(VAR5, 100, stdin) < 0)
            {
                FUN3(1);
            }
            FUN4(VAR5);
        }
    }
    else
    {
        {
            char VAR4[100] = "";
            char * VAR5 = VAR4;
            if (fgets(VAR5, 100, stdin) == NULL)
            {
                FUN3(1);
            }
            FUN4(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
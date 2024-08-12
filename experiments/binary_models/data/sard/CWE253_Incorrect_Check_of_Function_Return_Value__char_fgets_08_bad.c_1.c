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
    if(FUN1())
    {
        {
            char VAR4[100] = "";
            char * VAR5 = VAR4;
            if (fgets(VAR5, 100, stdin) < 0)
            {
                FUN4(1);
            }
            FUN5(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}
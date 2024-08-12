#VAR1 ""
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
            char VAR2[100] = "";
            char * VAR3 = VAR2;
            if (fgets(VAR3, 100, stdin) == NULL)
            {
            }
            FUN4(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
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
    int VAR2;
    VAR2 = 0;
    if(FUN1())
    {
        VAR2 = FUN4();
    }
    if(FUN1())
    {
        {
            int VAR3 = VAR2 + 1;
            FUN5(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}
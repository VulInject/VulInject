#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            int VAR2 = 0;
            FUN3(VAR2);
            VAR2 == 5;
            FUN3(VAR2);
        }
    }
    else
    {
        {
            int VAR3 = 0;
            FUN3(VAR3);
            VAR3 = 5;
            FUN3(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
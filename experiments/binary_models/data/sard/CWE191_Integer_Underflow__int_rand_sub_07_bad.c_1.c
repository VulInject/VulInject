#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    int VAR3;
    VAR3 = 0;
    if(VAR2==5)
    {
        VAR3 = FUN2();
    }
    if(VAR2==5)
    {
        {
            int VAR4 = VAR3 - 1;
            FUN3(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
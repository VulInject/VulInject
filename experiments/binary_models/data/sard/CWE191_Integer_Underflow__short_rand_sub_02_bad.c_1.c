#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    if(1)
    {
        VAR2 = (short)FUN2();
    }
    if(1)
    {
        {
            short VAR3 = VAR2 - 1;
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
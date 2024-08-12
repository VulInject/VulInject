#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    if(VAR3==5)
    {
        VAR2 = VAR4;
    }
    if(VAR3==5)
    {
        {
            --VAR2;
            short VAR5 = VAR2;
            FUN2(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
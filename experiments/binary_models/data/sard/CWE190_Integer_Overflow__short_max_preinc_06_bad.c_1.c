#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    short VAR3;
    VAR3 = 0;
    if(VAR2==5)
    {
        VAR3 = VAR4;
    }
    if(VAR2==5)
    {
        {
            ++VAR3;
            short VAR5 = VAR3;
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
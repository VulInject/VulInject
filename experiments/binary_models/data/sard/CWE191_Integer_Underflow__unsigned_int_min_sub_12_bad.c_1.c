#VAR1 ""
void FUN1()
{
    unsigned int VAR2;
    VAR2 = 0;
    if(FUN2())
    {
        VAR2 = 0;
    }
    else
    {
        VAR2 = -2;
    }
    if(FUN2())
    {
        {
            unsigned int VAR3 = VAR2 - 1;
            FUN3(VAR3);
        }
    }
    else
    {
        if (VAR2 > 0)
        {
            unsigned int VAR3 = VAR2 - 1;
            FUN3(VAR3);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
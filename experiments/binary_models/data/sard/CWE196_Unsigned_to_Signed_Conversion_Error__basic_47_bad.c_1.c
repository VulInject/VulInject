#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            unsigned VAR2;
            int VAR3;
            VAR2 = rand();
            if (rand() % 2 == 0)
            {
                VAR2 = VAR4 - VAR2;
            }
            VAR3 = VAR2;
            FUN3(VAR3);
        }
    }
    else
    {
        {
            unsigned VAR2;
            int VAR3;
            VAR2 = rand();
            if (rand() % 2 == 0)
            {
                VAR2 = VAR4 - VAR2;
            }
            if (VAR2 > VAR5)
            {
                FUN4(1);
            }
            VAR3 = VAR2;
            FUN3(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
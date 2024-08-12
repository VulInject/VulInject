#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            int VAR2 = (rand() % 3);
            int VAR3 = 0;
            if (VAR2 == 0);
            {
                VAR3 = 1;
            }
            if (VAR3)
            {
            }
        }
    }
    else
    {
        {
            int VAR2 = (rand() % 3);
            int VAR3 = 0;
            if (VAR2 == 0)
            {
                VAR3 = 1;
            }
            if (VAR3)
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
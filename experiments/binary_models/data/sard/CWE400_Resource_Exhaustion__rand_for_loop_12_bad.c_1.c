#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    if(FUN2())
    {
        VAR2 = FUN3();
    }
    else
    {
        VAR2 = 20;
    }
    if(FUN2())
    {
        {
            size_t VAR3 = 0;
            for (VAR3 = 0; VAR3 < (VAR4)VAR2; VAR3++)
            {
            }
        }
    }
    else
    {
        {
            size_t VAR3 = 0;
            if (VAR2 > 0 && VAR2 <= 20)
            {
                for (VAR3 = 0; VAR3 < (VAR4)VAR2; VAR3++)
                {
                }
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    int VAR3;
    VAR3 = -1;
    if(VAR2==5)
    {
        VAR3 = 10;
    }
    if(VAR2==5)
    {
        {
            int VAR4;
            int VAR5[10] = { 0 };
            if (VAR3 >= 0)
            {
                VAR5[VAR3] = 1;
                for(VAR4 = 0; VAR4 < 10; VAR4++)
                {
                    FUN2(VAR5[VAR4]);
                }
            }
            else
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
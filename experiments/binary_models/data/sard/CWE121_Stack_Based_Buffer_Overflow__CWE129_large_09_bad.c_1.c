#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    if(VAR3)
    {
        VAR2 = 10;
    }
    if(VAR3)
    {
        {
            int VAR4;
            int VAR5[10] = { 0 };
            if (VAR2 >= 0)
            {
                VAR5[VAR2] = 1;
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
#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    int VAR4;
    VAR4 = -1;
    if(VAR2)
    {
        VAR4 = FUN2();
    }
    if(VAR2)
    {
        {
            int VAR5;
            int VAR6[10] = { 0 };
            if (VAR4 >= 0)
            {
                VAR6[VAR4] = 1;
                for(VAR5 = 0; VAR5 < 10; VAR5++)
                {
                    FUN3(VAR6[VAR5]);
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
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
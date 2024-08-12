#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
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
            int VAR5[10] = { 0 };
            if (VAR4 >= 0)
            {
                FUN3(VAR5[VAR4]);
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
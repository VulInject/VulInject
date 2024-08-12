#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    if(VAR3)
    {
        VAR2 = FUN2();
    }
    if(VAR3)
    {
        {
            int VAR4[10] = { 0 };
            if (VAR2 >= 0)
            {
                FUN3(VAR4[VAR2]);
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
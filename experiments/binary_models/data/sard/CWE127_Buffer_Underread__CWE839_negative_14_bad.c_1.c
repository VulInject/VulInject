#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    if(VAR3==5)
    {
        VAR2 = -5;
    }
    if(VAR3==5)
    {
        {
            int VAR4[10] = { 0 };
            if (VAR2 < 10)
            {
                FUN2(VAR4[VAR2]);
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
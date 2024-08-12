#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = 0;
    if(5==5)
    {
        VAR2 = FUN2();
    }
    if(5==5)
    {
        {
            VAR2--;
            int VAR3 = VAR2;
            FUN3(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
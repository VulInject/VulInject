#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = 0;
    VAR2 = FUN2();
    {
        int VAR3 = VAR2;
        int VAR2 = VAR3;
        if(VAR2 < 0) 
        {
            int VAR4 = VAR2 * 2;
            FUN3(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
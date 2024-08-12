#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = 0;
    VAR2 = VAR3;
    {
        int VAR4 = VAR2;
        int VAR2 = VAR4;
        if(VAR2 > 0) 
        {
            int VAR5 = VAR2 * 2;
            FUN2(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int VAR4;
    VAR4 = 0;
    VAR4 = FUN2();
    {
        int VAR5 = VAR4;
        int VAR4 = VAR5;
        {
            int VAR6 = VAR4 * VAR4;
            FUN3(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
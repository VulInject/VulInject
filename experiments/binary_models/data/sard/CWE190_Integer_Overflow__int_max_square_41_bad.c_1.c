#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(int VAR4)
{
    {
        int VAR5 = VAR4 * VAR4;
        FUN2(VAR5);
    }
}
void FUN3()
{
    int VAR4;
    VAR4 = 0;
    VAR4 = VAR6;
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}
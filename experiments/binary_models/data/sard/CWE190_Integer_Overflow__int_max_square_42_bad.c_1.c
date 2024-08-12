#VAR1 ""
#VAR1 <VAR2.VAR3>
int FUN1(int VAR4)
{
    VAR4 = VAR5;
    return VAR4;
}
void FUN2()
{
    int VAR4;
    VAR4 = 0;
    VAR4 = FUN1(VAR4);
    {
        int VAR6 = VAR4 * VAR4;
        FUN3(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}
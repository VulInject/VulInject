#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(short VAR4)
{
    {
        short VAR5 = VAR4 * VAR4;
        FUN2(VAR5);
    }
}
void FUN3()
{
    short VAR4;
    VAR4 = 0;
    fscanf (stdin, "", &VAR4);
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}
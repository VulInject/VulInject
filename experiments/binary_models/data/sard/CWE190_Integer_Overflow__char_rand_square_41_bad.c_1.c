#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char VAR4)
{
    {
        char VAR5 = VAR4 * VAR4;
        FUN2(VAR5);
    }
}
void FUN3()
{
    char VAR4;
    VAR4 = '';
    VAR4 = (char)FUN4();
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
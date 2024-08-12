#VAR1 ""
#VAR1 <VAR2.VAR3>
char FUN1(char VAR4)
{
    fscanf (stdin, "", &VAR4);
    return VAR4;
}
void FUN2()
{
    char VAR4;
    VAR4 = '';
    VAR4 = FUN1(VAR4);
    {
        char VAR5 = VAR4 * VAR4;
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}
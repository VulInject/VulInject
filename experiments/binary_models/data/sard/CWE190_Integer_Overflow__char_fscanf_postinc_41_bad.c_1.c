#VAR1 ""
void FUN1(char VAR2)
{
    {
        VAR2++;
        char VAR3 = VAR2;
        FUN2(VAR3);
    }
}
void FUN3()
{
    char VAR2;
    VAR2 = '';
    fscanf (stdin, "", &VAR2);
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}
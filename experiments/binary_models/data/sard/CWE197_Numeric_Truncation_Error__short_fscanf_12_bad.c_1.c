#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = -1;
    if(FUN2())
    {
        fscanf (stdin, "", &VAR2);
    }
    else
    {
        VAR2 = VAR3-5;
    }
    {
        char VAR4 = (char)VAR2;
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
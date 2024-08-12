#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = -1;
    goto VAR3;
VAR3:
    fscanf (stdin, "", &VAR2);
    {
        char VAR4 = (char)VAR2;
        FUN2(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
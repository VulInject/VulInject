#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = -1;
    fscanf (stdin, "", &VAR2);
    {
        char VAR3 = (char)VAR2;
        FUN2(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
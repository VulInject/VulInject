#VAR1 ""
void FUN1(short VAR2)
{
    {
        char VAR3 = (char)VAR2;
        FUN2(VAR3);
    }
}
void FUN3()
{
    short VAR2;
    void (*VAR4) (short) = VAR5;
    VAR2 = -1;
    fscanf (stdin, "", &VAR2);
    FUN4(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
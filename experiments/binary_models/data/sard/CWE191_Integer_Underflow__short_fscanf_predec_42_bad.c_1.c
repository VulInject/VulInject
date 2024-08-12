#VAR1 ""
short FUN1(short VAR2)
{
    fscanf (stdin, "", &VAR2);
    return VAR2;
}
void FUN2()
{
    short VAR2;
    VAR2 = 0;
    VAR2 = FUN1(VAR2);
    {
        --VAR2;
        short VAR3 = VAR2;
        FUN3(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}
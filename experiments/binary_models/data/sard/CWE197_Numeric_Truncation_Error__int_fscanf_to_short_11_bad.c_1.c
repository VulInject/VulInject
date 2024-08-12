#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    if(FUN2())
    {
        fscanf(stdin, "", &VAR2);
    }
    {
        short VAR3 = (short)VAR2;
        FUN3(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
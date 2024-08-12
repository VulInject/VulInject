#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    switch(6)
    {
    case 6:
        fscanf(stdin, "", &VAR2);
        break;
    default:
        break;
    }
    {
        short VAR3 = (short)VAR2;
        FUN2(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
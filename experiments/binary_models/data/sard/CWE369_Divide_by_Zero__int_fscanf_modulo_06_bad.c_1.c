#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    int VAR3;
    VAR3 = -1;
    if(VAR2==5)
    {
        fscanf(stdin, "", &VAR3);
    }
    if(VAR2==5)
    {
        FUN2(100 % VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
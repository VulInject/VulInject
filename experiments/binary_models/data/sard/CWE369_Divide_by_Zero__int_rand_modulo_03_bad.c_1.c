#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    if(5==5)
    {
        VAR2 = FUN2();
    }
    if(5==5)
    {
        FUN3(100 % VAR2);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
int FUN1(int VAR2)
{
    VAR2 = FUN2();
    return VAR2;
}
void FUN3()
{
    int VAR2;
    VAR2 = -1;
    VAR2 = FUN1(VAR2);
    FUN4(100 % VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
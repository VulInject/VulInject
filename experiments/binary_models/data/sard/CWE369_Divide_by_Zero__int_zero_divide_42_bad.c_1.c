#VAR1 ""
int FUN1(int VAR2)
{
    VAR2 = 0;
    return VAR2;
}
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    VAR2 = FUN1(VAR2);
    FUN3(100 / VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}
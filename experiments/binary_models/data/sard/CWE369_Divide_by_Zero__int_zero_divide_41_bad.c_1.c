#VAR1 ""
void FUN1(int VAR2)
{
    FUN2(100 / VAR2);
}
void FUN3()
{
    int VAR2;
    VAR2 = -1;
    VAR2 = 0;
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}
#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    VAR2 = FUN2();
    FUN3(100 / VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
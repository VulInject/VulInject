#VAR1 ""
static FUN1(void)
{
    return;
}
void FUN2() 
{
    int VAR2 = FUN1();
    FUN3(VAR2);
}
int main(int argc, char * argv[]) 
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}
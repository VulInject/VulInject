#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long VAR4;
    VAR4 = 5L;
    VAR4 = 10L;
    FUN2(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
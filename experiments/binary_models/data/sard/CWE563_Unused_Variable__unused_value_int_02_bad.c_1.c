#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int VAR4;
    if(1)
    {
        VAR4 = 5;
    }
    if(1)
    {
        VAR4 = 10;
        FUN2(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
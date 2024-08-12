#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    short VAR5;
    VAR5 = 0;
    if(VAR4==5)
    {
        VAR5 = (short)FUN2();
    }
    if(VAR4==5)
    {
        {
            short VAR6 = VAR5 * VAR5;
            FUN3(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
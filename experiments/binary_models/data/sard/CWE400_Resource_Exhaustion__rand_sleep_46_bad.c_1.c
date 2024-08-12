#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SLEEP VAR4
#VAR1 <VAR5.VAR3>
#define SLEEP VAR6
void FUN1()
{
    int VAR7;
    VAR7 = -1;
    if(FUN2())
    {
        VAR7 = FUN3();
    }
    if(FUN2())
    {
        FUN4(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
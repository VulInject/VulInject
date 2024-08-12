#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SLEEP VAR4
#VAR1 <VAR5.VAR3>
#define SLEEP VAR6
void FUN1()
{
    int VAR7;
    VAR7 = -1;
    while(1)
    {
        VAR7 = FUN2();
        break;
    }
    while(1)
    {
        FUN3(VAR7);
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
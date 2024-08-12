#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SLEEP VAR4
#VAR1 <VAR5.VAR3>
#define SLEEP VAR6
void FUN1(int VAR7)
{
    FUN2(VAR7);
}
void FUN3()
{
    int VAR7;
    void (*VAR8) (int) = VAR9;
    VAR7 = -1;
    VAR7 = FUN4();
    FUN5(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}
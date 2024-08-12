#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SLEEP VAR4
#VAR1 <VAR5.VAR3>
#define SLEEP VAR6
typedef union
{
    int VAR7;
    int VAR8;
} VAR9;
void FUN1()
{
    int VAR10;
    CWE400_Resource_Exhaustion__rand_sleep_34_unionType VAR11;
    VAR10 = -1;
    VAR10 = FUN2();
    VAR11.VAR7 = VAR10;
    {
        int VAR10 = VAR11.VAR8;
        FUN3(VAR10);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
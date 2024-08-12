#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SLEEP VAR4
#VAR1 <VAR5.VAR3>
#define SLEEP VAR6
static const int VAR7 = 1; 
static const int VAR8 = 0; 
void FUN1()
{
    int VAR9;
    VAR9 = -1;
    if(VAR7)
    {
        VAR9 = FUN2();
    }
    if(VAR7)
    {
        FUN3(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR5 ""
#define VAR4 ""
#define VAR5 ""
#define SYSTEM system
#define SYSTEM system
static const int VAR6 = 5;
void FUN1()
{
    char * VAR7;
    char VAR8[100] = "";
    VAR7 = VAR8;
    if(VAR6==5)
    {
        strcpy(VAR7, VAR4);
    }
    if (FUN2(VAR7) <= 0)
    {
        FUN3(1);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
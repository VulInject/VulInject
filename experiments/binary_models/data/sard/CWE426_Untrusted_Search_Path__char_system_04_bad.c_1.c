#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR5 ""
#define VAR4 ""
#define VAR5 ""
#define SYSTEM system
#define SYSTEM system
static const int VAR6 = 1; 
static const int VAR7 = 0; 
void FUN1()
{
    char * VAR8;
    char VAR9[100] = "";
    VAR8 = VAR9;
    if(VAR6)
    {
        strcpy(VAR8, VAR4);
    }
    if (FUN2(VAR8) <= 0)
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
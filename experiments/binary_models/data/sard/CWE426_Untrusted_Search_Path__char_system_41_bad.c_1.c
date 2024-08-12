#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR5 ""
#define VAR4 ""
#define VAR5 ""
#define SYSTEM system
#define SYSTEM system
void FUN1(char * VAR6)
{
    if (FUN2(VAR6) <= 0)
    {
        FUN3(1);
    }
}
void FUN4()
{
    char * VAR6;
    char VAR7[100] = "";
    VAR6 = VAR7;
    strcpy(VAR6, VAR4);
    FUN1(VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN4();
    return 0;
}
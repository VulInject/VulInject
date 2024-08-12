#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR5 ""
#define VAR4 ""
#define VAR5 ""
#define SYSTEM system
#define SYSTEM system
char * FUN1(char * VAR6)
{
    strcpy(VAR6, VAR4);
    return VAR6;
}
void FUN2()
{
    char * VAR6;
    char VAR7[100] = "";
    VAR6 = VAR7;
    VAR6 = FUN1(VAR6);
    if (FUN3(VAR6) <= 0)
    {
        FUN4(1);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}
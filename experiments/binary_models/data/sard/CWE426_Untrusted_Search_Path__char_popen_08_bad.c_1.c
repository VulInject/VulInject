#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR5 ""
#define VAR4 ""
#define VAR5 ""
#define POPEN VAR6
#define PCLOSE VAR7
#define POPEN popen
#define PCLOSE VAR8
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    char * VAR9;
    char VAR10[100] = "";
    VAR9 = VAR10;
    if(FUN1())
    {
        strcpy(VAR9, VAR4);
    }
    {
        VAR11 *VAR12;
        VAR12 = FUN4(VAR9, "");
        if (VAR12 != NULL)
        {
            FUN5(VAR12);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}
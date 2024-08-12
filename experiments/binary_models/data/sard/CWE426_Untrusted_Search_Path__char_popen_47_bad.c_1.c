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
void FUN1()
{
    char * VAR9;
    char VAR10[100] = "";
    VAR9 = VAR10;
    if(FUN2())
    {
        strcpy(VAR9, VAR4);
    }
    else
    {
        strcpy(VAR9, VAR5);
    }
    {
        VAR11 *VAR12;
        VAR12 = FUN3(VAR9, "");
        if (VAR12 != NULL)
        {
            FUN4(VAR12);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
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
void FUN1(char * VAR9)
{
    {
        VAR10 *VAR11;
        VAR11 = FUN2(VAR9, "");
        if (VAR11 != NULL)
        {
            FUN3(VAR11);
        }
    }
}
void FUN4()
{
    char * VAR9;
    char VAR12[100] = "";
    VAR9 = VAR12;
    strcpy(VAR9, VAR4);
    FUN1(VAR9);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN4();
    return 0;
}
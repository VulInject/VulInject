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
    char * *VAR10 = &VAR9;
    char * *VAR11 = &VAR9;
    char VAR12[100] = "";
    VAR9 = VAR12;
    {
        char * VAR9 = *VAR10;
        strcpy(VAR9, VAR4);
        *VAR10 = VAR9;
    }
    {
        char * VAR9 = *VAR11;
        {
            VAR13 *VAR14;
            VAR14 = FUN2(VAR9, "");
            if (VAR14 != NULL)
            {
                FUN3(VAR14);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
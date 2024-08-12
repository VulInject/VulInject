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
static const int VAR9 = 1; 
static const int VAR10 = 0; 
void FUN1()
{
    char * VAR11;
    char VAR12[100] = "";
    VAR11 = VAR12;
    if(VAR9)
    {
        strcpy(VAR11, VAR4);
    }
    {
        VAR13 *VAR14;
        VAR14 = FUN2(VAR11, "");
        if (VAR14 != NULL)
        {
            FUN3(VAR14);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
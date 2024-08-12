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
typedef union
{
    char * VAR9;
    char * VAR10;
} VAR11;
void FUN1()
{
    char * VAR12;
    CWE426_Untrusted_Search_Path__char_popen_34_unionType VAR13;
    char VAR14[100] = "";
    VAR12 = VAR14;
    strcpy(VAR12, VAR4);
    VAR13.VAR9 = VAR12;
    {
        char * VAR12 = VAR13.VAR10;
        {
            VAR15 *VAR16;
            VAR16 = FUN2(VAR12, "");
            if (VAR16 != NULL)
            {
                FUN3(VAR16);
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
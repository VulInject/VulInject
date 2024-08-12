#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR5 ""
#define VAR4 ""
#define VAR5 ""
#define SYSTEM system
#define SYSTEM system
typedef union
{
    char * VAR6;
    char * VAR7;
} VAR8;
void FUN1()
{
    char * VAR9;
    CWE426_Untrusted_Search_Path__char_system_34_unionType VAR10;
    char VAR11[100] = "";
    VAR9 = VAR11;
    strcpy(VAR9, VAR4);
    VAR10.VAR6 = VAR9;
    {
        char * VAR9 = VAR10.VAR7;
        if (FUN2(VAR9) <= 0)
        {
            FUN3(1);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
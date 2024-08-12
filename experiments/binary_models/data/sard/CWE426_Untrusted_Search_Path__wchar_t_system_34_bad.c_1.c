#VAR1 ""
#VAR1 <VAR2.VAR3>
#define BAD_OS_COMMAND VAR4""
#define GOOD_OS_COMMAND VAR4""
#define BAD_OS_COMMAND VAR4""
#define GOOD_OS_COMMAND VAR4""
#define SYSTEM _wsystem
#define SYSTEM system
typedef union
{
    wchar_t * VAR5;
    wchar_t * VAR6;
} VAR7;
void FUN1()
{
    wchar_t * VAR8;
    CWE426_Untrusted_Search_Path__wchar_t_system_34_unionType VAR9;
    wchar_t VAR10[100] = VAR4"";
    VAR8 = VAR10;
    wcscpy(VAR8, VAR11);
    VAR9.VAR5 = VAR8;
    {
        wchar_t * VAR8 = VAR9.VAR6;
        if (FUN2(VAR8) <= 0)
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
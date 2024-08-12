#VAR1 ""
#VAR1 <VAR2.VAR3>
#define BAD_OS_COMMAND VAR4""
#define GOOD_OS_COMMAND VAR4""
#define BAD_OS_COMMAND VAR4""
#define GOOD_OS_COMMAND VAR4""
#define POPEN VAR5
#define PCLOSE VAR6
#define POPEN popen
#define PCLOSE VAR7
typedef union
{
    wchar_t * VAR8;
    wchar_t * VAR9;
} VAR10;
void FUN1()
{
    wchar_t * VAR11;
    CWE426_Untrusted_Search_Path__wchar_t_popen_34_unionType VAR12;
    wchar_t VAR13[100] = VAR4"";
    VAR11 = VAR13;
    wcscpy(VAR11, VAR14);
    VAR12.VAR8 = VAR11;
    {
        wchar_t * VAR11 = VAR12.VAR9;
        {
            VAR15 *VAR16;
            VAR16 = FUN2(VAR11, VAR4"");
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
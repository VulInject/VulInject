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
void FUN1()
{
    wchar_t * VAR8;
    wchar_t VAR9[100] = VAR4"";
    VAR8 = VAR9;
    goto VAR10;
VAR10:
    wcscpy(VAR8, VAR11);
    {
        VAR12 *VAR13;
        VAR13 = FUN2(VAR8, VAR4"");
        if (VAR13 != NULL)
        {
            FUN3(VAR13);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
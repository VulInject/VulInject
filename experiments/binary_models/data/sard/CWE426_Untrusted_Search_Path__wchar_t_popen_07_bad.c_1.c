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
int VAR8 = 5;
void FUN1()
{
    wchar_t * VAR9;
    wchar_t VAR10[100] = VAR4"";
    VAR9 = VAR10;
    if(VAR8==5)
    {
        wcscpy(VAR9, VAR11);
    }
    {
        VAR12 *VAR13;
        VAR13 = FUN2(VAR9, VAR4"");
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
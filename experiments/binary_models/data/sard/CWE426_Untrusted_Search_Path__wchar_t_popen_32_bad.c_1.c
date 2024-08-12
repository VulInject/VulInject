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
    wchar_t * *VAR9 = &VAR8;
    wchar_t * *VAR10 = &VAR8;
    wchar_t VAR11[100] = VAR4"";
    VAR8 = VAR11;
    {
        wchar_t * VAR8 = *VAR9;
        wcscpy(VAR8, VAR12);
        *VAR9 = VAR8;
    }
    {
        wchar_t * VAR8 = *VAR10;
        {
            VAR13 *VAR14;
            VAR14 = FUN2(VAR8, VAR4"");
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
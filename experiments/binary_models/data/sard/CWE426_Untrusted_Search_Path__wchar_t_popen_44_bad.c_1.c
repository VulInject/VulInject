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
void FUN1(wchar_t * VAR8)
{
    {
        VAR9 *VAR10;
        VAR10 = FUN2(VAR8, VAR4"");
        if (VAR10 != NULL)
        {
            FUN3(VAR10);
        }
    }
}
void FUN4()
{
    wchar_t * VAR8;
    void (*VAR11) (wchar_t *) = VAR12;
    wchar_t VAR13[100] = VAR4"";
    VAR8 = VAR13;
    wcscpy(VAR8, VAR14);
    FUN5(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN4();
    return 0;
}
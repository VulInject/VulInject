#VAR1 ""
#VAR1 <VAR2.VAR3>
#define BAD_OS_COMMAND VAR4""
#define GOOD_OS_COMMAND VAR4""
#define BAD_OS_COMMAND VAR4""
#define GOOD_OS_COMMAND VAR4""
#define SYSTEM _wsystem
#define SYSTEM system
void FUN1(wchar_t * VAR5)
{
    if (FUN2(VAR5) <= 0)
    {
        FUN3(1);
    }
}
void FUN4()
{
    wchar_t * VAR5;
    wchar_t VAR6[100] = VAR4"";
    VAR5 = VAR6;
    wcscpy(VAR5, VAR7);
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN4();
    return 0;
}
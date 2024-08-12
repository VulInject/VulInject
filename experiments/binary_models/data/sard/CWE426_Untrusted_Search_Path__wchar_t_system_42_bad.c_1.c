#VAR1 ""
#VAR1 <VAR2.VAR3>
#define BAD_OS_COMMAND VAR4""
#define GOOD_OS_COMMAND VAR4""
#define BAD_OS_COMMAND VAR4""
#define GOOD_OS_COMMAND VAR4""
#define SYSTEM _wsystem
#define SYSTEM system
wchar_t * FUN1(wchar_t * VAR5)
{
    wcscpy(VAR5, VAR6);
    return VAR5;
}
void FUN2()
{
    wchar_t * VAR5;
    wchar_t VAR7[100] = VAR4"";
    VAR5 = VAR7;
    VAR5 = FUN1(VAR5);
    if (FUN3(VAR5) <= 0)
    {
        FUN4(1);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}
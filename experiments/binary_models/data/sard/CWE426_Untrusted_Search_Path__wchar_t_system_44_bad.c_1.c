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
    void (*VAR6) (wchar_t *) = VAR7;
    wchar_t VAR8[100] = VAR4"";
    VAR5 = VAR8;
    wcscpy(VAR5, VAR9);
    FUN5(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN4();
    return 0;
}
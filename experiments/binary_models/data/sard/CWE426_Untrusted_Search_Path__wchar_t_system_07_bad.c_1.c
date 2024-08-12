#VAR1 ""
#VAR1 <VAR2.VAR3>
#define BAD_OS_COMMAND VAR4""
#define GOOD_OS_COMMAND VAR4""
#define BAD_OS_COMMAND VAR4""
#define GOOD_OS_COMMAND VAR4""
#define SYSTEM _wsystem
#define SYSTEM system
int VAR5 = 5;
void FUN1()
{
    wchar_t * VAR6;
    wchar_t VAR7[100] = VAR4"";
    VAR6 = VAR7;
    if(VAR5==5)
    {
        wcscpy(VAR6, VAR8);
    }
    if (FUN2(VAR6) <= 0)
    {
        FUN3(1);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
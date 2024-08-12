#VAR1 ""
#VAR1 <VAR2.VAR3>
#define BAD_OS_COMMAND VAR4""
#define GOOD_OS_COMMAND VAR4""
#define BAD_OS_COMMAND VAR4""
#define GOOD_OS_COMMAND VAR4""
#define SYSTEM _wsystem
#define SYSTEM system
static const int VAR5 = 1; 
static const int VAR6 = 0; 
void FUN1()
{
    wchar_t * VAR7;
    wchar_t VAR8[100] = VAR4"";
    VAR7 = VAR8;
    if(VAR5)
    {
        wcscpy(VAR7, VAR9);
    }
    if (FUN2(VAR7) <= 0)
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
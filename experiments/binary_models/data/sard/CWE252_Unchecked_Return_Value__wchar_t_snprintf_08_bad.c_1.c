#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC VAR4""
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    if(FUN1())
    {
        {
            wchar_t VAR5[100] = VAR4"";
            wchar_t * VAR6 = VAR5;
            FUN4(VAR6,100-wcslen(VAR7)-1, VAR4"", VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
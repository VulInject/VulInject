#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC VAR4""
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
void FUN1()
{
    if(FUN2())
    {
        {
            wchar_t VAR5[100] = VAR4"";
            wchar_t * VAR6 = VAR5;
            FUN3(VAR6,100-wcslen(VAR7)-1, VAR4"", VAR7);
        }
    }
    else
    {
        {
            wchar_t VAR5[100] = VAR4"";
            wchar_t * VAR6 = VAR5;
            if (FUN3(VAR6,100-wcslen(VAR7)-1, VAR4"", VAR7) < 0)
            {
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
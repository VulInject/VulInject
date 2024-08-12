#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC VAR4""
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
void FUN1()
{
    if(VAR5==5)
    {
        {
            wchar_t VAR6[100] = VAR4"";
            wchar_t * VAR7 = VAR6;
            FUN2(VAR7,100-wcslen(VAR8)-1, VAR4"", VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
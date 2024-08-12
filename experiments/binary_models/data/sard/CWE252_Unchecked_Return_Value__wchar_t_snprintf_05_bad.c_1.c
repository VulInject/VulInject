#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC VAR4""
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
int VAR5 = 1; 
int VAR6 = 0; 
void FUN1()
{
    if(VAR5)
    {
        {
            wchar_t VAR7[100] = VAR4"";
            wchar_t * VAR8 = VAR7;
            FUN2(VAR8,100-wcslen(VAR9)-1, VAR4"", VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
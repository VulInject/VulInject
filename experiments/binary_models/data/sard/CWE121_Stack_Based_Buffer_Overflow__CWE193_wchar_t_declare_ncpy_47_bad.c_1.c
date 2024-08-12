#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[10];
    wchar_t VAR7[10+1];
    if(FUN2())
    {
        VAR5 = VAR6;
        VAR5[0] = VAR4''; 
    }
    else
    {
        VAR5 = VAR7;
        VAR5[0] = VAR4''; 
    }
    {
        wchar_t VAR8[10+1] = VAR9;
        wcsncpy(VAR5, VAR8, wcslen(VAR8) + 1);
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
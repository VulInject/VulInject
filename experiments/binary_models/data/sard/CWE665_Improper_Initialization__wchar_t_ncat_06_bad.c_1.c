#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[100];
    VAR5 = VAR6;
    if(VAR4==5)
    {
        ; 
    }
    {
        size_t VAR7;
        wchar_t VAR8[100];
        wmemset(VAR8, VAR9'', 100-1); 
        VAR8[100-1] = VAR9''; 
        VAR7 = wcslen(VAR8);
        wcsncat(VAR5, VAR8, VAR7);
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
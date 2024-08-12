#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
static const int VAR5 = 5;
void FUN1()
{
    wchar_t * VAR6;
    wchar_t VAR7[10];
    wchar_t VAR8[10+1];
    if(VAR5==5)
    {
        VAR6 = VAR7;
        VAR6[0] = VAR4''; 
    }
    {
        wchar_t VAR9[10+1] = VAR10;
        memmove(VAR6, VAR9, (wcslen(VAR9) + 1) * sizeof(wchar_t));
        FUN2(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
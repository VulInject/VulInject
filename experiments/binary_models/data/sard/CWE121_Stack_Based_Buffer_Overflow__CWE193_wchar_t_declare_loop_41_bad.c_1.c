#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
void FUN1(wchar_t * VAR5)
{
    {
        wchar_t VAR6[10+1] = VAR7;
        size_t VAR8, VAR9;
        VAR9 = wcslen(VAR6);
        for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
        {
            VAR5[VAR8] = VAR6[VAR8];
        }
        FUN2(VAR5);
    }
}
void FUN3()
{
    wchar_t * VAR5;
    wchar_t VAR10[10];
    wchar_t VAR11[10+1];
    VAR5 = VAR10;
    VAR5[0] = VAR4''; 
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}
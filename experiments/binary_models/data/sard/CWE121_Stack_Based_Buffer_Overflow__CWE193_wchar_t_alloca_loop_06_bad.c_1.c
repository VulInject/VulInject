#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
static const int VAR5 = 5;
void FUN1()
{
    wchar_t * VAR6;
    wchar_t * VAR7 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR8 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
    if(VAR5==5)
    {
        VAR6 = VAR7;
        VAR6[0] = VAR4''; 
    }
    {
        wchar_t VAR9[10+1] = VAR10;
        size_t VAR11, VAR12;
        VAR12 = wcslen(VAR9);
        for (VAR11 = 0; VAR11 < VAR12 + 1; VAR11++)
        {
            VAR6[VAR11] = VAR9[VAR11];
        }
        FUN3(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
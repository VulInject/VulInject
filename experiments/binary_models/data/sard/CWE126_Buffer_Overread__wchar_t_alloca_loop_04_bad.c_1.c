#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    wchar_t * VAR6;
    wchar_t * VAR7 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR8 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR7, VAR9'', 50-1); 
    VAR7[50-1] = VAR9''; 
    wmemset(VAR8, VAR9'', 100-1); 
    VAR8[100-1] = VAR9''; 
    if(VAR4)
    {
        VAR6 = VAR7;
    }
    {
        size_t VAR10, VAR11;
        wchar_t VAR12[100];
        wmemset(VAR12, VAR9'', 100-1);
        VAR12[100-1] = VAR9''; 
        VAR11 = wcslen(VAR12);
        for (VAR10 = 0; VAR10 < VAR11; VAR10++)
        {
            VAR12[VAR10] = VAR6[VAR10];
        }
        VAR12[100-1] = VAR9'';
        FUN3(VAR12);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    wchar_t * VAR5;
    wchar_t * VAR6 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR7 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR6, VAR8'', 50-1); 
    VAR6[50-1] = VAR8''; 
    wmemset(VAR7, VAR8'', 100-1); 
    VAR7[100-1] = VAR8''; 
    if(VAR4==5)
    {
        VAR5 = VAR6;
    }
    {
        size_t VAR9, VAR10;
        wchar_t VAR11[100];
        wmemset(VAR11, VAR8'', 100-1);
        VAR11[100-1] = VAR8''; 
        VAR10 = wcslen(VAR11);
        for (VAR9 = 0; VAR9 < VAR10; VAR9++)
        {
            VAR11[VAR9] = VAR5[VAR9];
        }
        VAR11[100-1] = VAR8'';
        FUN3(VAR11);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
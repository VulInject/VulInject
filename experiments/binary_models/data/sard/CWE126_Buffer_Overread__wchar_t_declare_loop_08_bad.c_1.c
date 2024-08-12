#VAR1 ""
#VAR1 <VAR2.VAR3>
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    wchar_t * VAR4;
    wchar_t VAR5[50];
    wchar_t VAR6[100];
    wmemset(VAR5, VAR7'', 50-1); 
    VAR5[50-1] = VAR7''; 
    wmemset(VAR6, VAR7'', 100-1); 
    VAR6[100-1] = VAR7''; 
    if(FUN1())
    {
        VAR4 = VAR5;
    }
    {
        size_t VAR8, VAR9;
        wchar_t VAR10[100];
        wmemset(VAR10, VAR7'', 100-1);
        VAR10[100-1] = VAR7''; 
        VAR9 = wcslen(VAR10);
        for (VAR8 = 0; VAR8 < VAR9; VAR8++)
        {
            VAR10[VAR8] = VAR4[VAR8];
        }
        VAR10[100-1] = VAR7'';
        FUN4(VAR10);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    {
        size_t VAR5;
        wchar_t VAR6[100];
        wmemset(VAR6, VAR7'', 100-1); 
        VAR6[100-1] = VAR7''; 
        for (VAR5 = 0; VAR5 < 100; VAR5++)
        {
            VAR6[VAR5] = VAR4[VAR5];
        }
        VAR6[100-1] = VAR7'';
        FUN2(VAR6);
    }
}
void FUN3()
{
    wchar_t * VAR4;
    void (*VAR8) (wchar_t *) = VAR9;
    wchar_t VAR10[100];
    wmemset(VAR10, VAR7'', 100-1);
    VAR10[100-1] = VAR7'';
    VAR4 = VAR10 - 8;
    FUN4(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
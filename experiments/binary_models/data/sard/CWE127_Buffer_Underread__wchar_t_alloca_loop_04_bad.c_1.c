#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    wchar_t * VAR6;
    wchar_t * VAR7 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR7, VAR8'', 100-1);
    VAR7[100-1] = VAR8'';
    if(VAR4)
    {
        VAR6 = VAR7 - 8;
    }
    {
        size_t VAR9;
        wchar_t VAR10[100];
        wmemset(VAR10, VAR8'', 100-1); 
        VAR10[100-1] = VAR8''; 
        for (VAR9 = 0; VAR9 < 100; VAR9++)
        {
            VAR10[VAR9] = VAR6[VAR9];
        }
        VAR10[100-1] = VAR8'';
        FUN3(VAR10);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
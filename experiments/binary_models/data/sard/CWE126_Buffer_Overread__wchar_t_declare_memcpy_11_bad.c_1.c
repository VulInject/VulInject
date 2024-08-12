#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t VAR5[50];
    wchar_t VAR6[100];
    wmemset(VAR5, VAR7'', 50-1); 
    VAR5[50-1] = VAR7''; 
    wmemset(VAR6, VAR7'', 100-1); 
    VAR6[100-1] = VAR7''; 
    if(FUN2())
    {
        VAR4 = VAR5;
    }
    {
        wchar_t VAR8[100];
        wmemset(VAR8, VAR7'', 100-1);
        VAR8[100-1] = VAR7''; 
        memcpy(VAR8, VAR4, wcslen(VAR8)*sizeof(wchar_t));
        VAR8[100-1] = VAR7'';
        FUN3(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
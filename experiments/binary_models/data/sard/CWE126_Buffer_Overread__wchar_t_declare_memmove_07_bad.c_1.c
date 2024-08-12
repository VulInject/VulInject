#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[50];
    wchar_t VAR7[100];
    wmemset(VAR6, VAR8'', 50-1); 
    VAR6[50-1] = VAR8''; 
    wmemset(VAR7, VAR8'', 100-1); 
    VAR7[100-1] = VAR8''; 
    if(VAR4==5)
    {
        VAR5 = VAR6;
    }
    {
        wchar_t VAR9[100];
        wmemset(VAR9, VAR8'', 100-1);
        VAR9[100-1] = VAR8''; 
        memmove(VAR9, VAR5, wcslen(VAR9)*sizeof(wchar_t));
        VAR9[100-1] = VAR8'';
        FUN2(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
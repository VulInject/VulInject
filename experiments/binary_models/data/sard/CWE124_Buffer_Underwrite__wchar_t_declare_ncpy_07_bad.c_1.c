#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[100];
    wmemset(VAR6, VAR7'', 100-1);
    VAR6[100-1] = VAR7'';
    if(VAR4==5)
    {
        VAR5 = VAR6 - 8;
    }
    {
        wchar_t VAR8[100];
        wmemset(VAR8, VAR7'', 100-1); 
        VAR8[100-1] = VAR7''; 
        wcsncpy(VAR5, VAR8, 100-1);
        VAR5[100-1] = VAR7'';
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
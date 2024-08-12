#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t VAR5[100];
    VAR4 = VAR5;
    if(VAR6)
    {
        ; 
    }
    {
        wchar_t VAR7[100];
        wmemset(VAR7, VAR8'', 100-1); 
        VAR7[100-1] = VAR8''; 
        wcscat(VAR4, VAR7);
        FUN2(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t VAR5[100];
    VAR4 = VAR5;
    if(FUN2())
    {
        ; 
    }
    else
    {
        VAR4[0] = VAR6''; 
    }
    {
        wchar_t VAR7[100];
        wmemset(VAR7, VAR6'', 100-1); 
        VAR7[100-1] = VAR6''; 
        wcscat(VAR4, VAR7);
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
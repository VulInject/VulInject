#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t * VAR5 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR5, VAR6'', 100-1);
    VAR5[100-1] = VAR6'';
    if(FUN3())
    {
        VAR4 = VAR5 - 8;
    }
    else
    {
        VAR4 = VAR5;
    }
    {
        wchar_t VAR7[100];
        wmemset(VAR7, VAR6'', 100-1); 
        VAR7[100-1] = VAR6''; 
        wcsncpy(VAR4, VAR7, 100-1);
        VAR4[100-1] = VAR6'';
        FUN4(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
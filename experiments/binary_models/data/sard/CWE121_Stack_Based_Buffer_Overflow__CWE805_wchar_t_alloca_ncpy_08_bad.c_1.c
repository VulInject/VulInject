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
    wchar_t * VAR5 = (wchar_t *)FUN4(50*sizeof(wchar_t));
    wchar_t * VAR6 = (wchar_t *)FUN4(100*sizeof(wchar_t));
    if(FUN1())
    {
        VAR4 = VAR5;
        VAR4[0] = VAR7''; 
    }
    {
        wchar_t VAR8[100];
        wmemset(VAR8, VAR7'', 100-1); 
        VAR8[100-1] = VAR7''; 
        wcsncpy(VAR4, VAR8, 100-1);
        VAR4[100-1] = VAR7''; 
        FUN5(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}
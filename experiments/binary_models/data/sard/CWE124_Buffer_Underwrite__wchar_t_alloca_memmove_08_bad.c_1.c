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
    wchar_t * VAR5 = (wchar_t *)FUN4(100*sizeof(wchar_t));
    wmemset(VAR5, VAR6'', 100-1);
    VAR5[100-1] = VAR6'';
    if(FUN1())
    {
        VAR4 = VAR5 - 8;
    }
    {
        wchar_t VAR7[100];
        wmemset(VAR7, VAR6'', 100-1); 
        VAR7[100-1] = VAR6''; 
        memmove(VAR4, VAR7, 100*sizeof(wchar_t));
        VAR4[100-1] = VAR6'';
        FUN5(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}
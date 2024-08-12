#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    wchar_t * VAR6;
    wchar_t * VAR7 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR8 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    if(VAR4)
    {
        VAR6 = VAR7;
        VAR6[0] = VAR9''; 
    }
    {
        wchar_t VAR10[100];
        wmemset(VAR10, VAR9'', 100-1); 
        VAR10[100-1] = VAR9''; 
        memmove(VAR6, VAR10, 100*sizeof(wchar_t));
        VAR6[100-1] = VAR9''; 
        FUN3(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
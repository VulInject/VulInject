#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
void FUN1()
{
    wchar_t * VAR5;
    wchar_t * VAR6 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR7 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
    if(FUN3())
    {
        VAR5 = VAR6;
        VAR5[0] = VAR4''; 
    }
    else
    {
        VAR5 = VAR7;
        VAR5[0] = VAR4''; 
    }
    {
        wchar_t VAR8[10+1] = VAR9;
        memcpy(VAR5, VAR8, (wcslen(VAR8) + 1) * sizeof(wchar_t));
        FUN4(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
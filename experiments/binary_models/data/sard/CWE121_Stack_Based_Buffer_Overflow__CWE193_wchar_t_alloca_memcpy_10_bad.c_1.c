#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
void FUN1()
{
    wchar_t * VAR5;
    wchar_t * VAR6 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR7 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
    if(VAR8)
    {
        VAR5 = VAR6;
        VAR5[0] = VAR4''; 
    }
    {
        wchar_t VAR9[10+1] = VAR10;
        memcpy(VAR5, VAR9, (wcslen(VAR9) + 1) * sizeof(wchar_t));
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
void FUN1(wchar_t * VAR5)
{
    {
        wchar_t VAR6[10+1] = VAR7;
        memcpy(VAR5, VAR6, (wcslen(VAR6) + 1) * sizeof(wchar_t));
        FUN2(VAR5);
    }
}
void FUN3()
{
    wchar_t * VAR5;
    wchar_t * VAR8 = (wchar_t *)FUN4((10)*sizeof(wchar_t));
    wchar_t * VAR9 = (wchar_t *)FUN4((10+1)*sizeof(wchar_t));
    VAR5 = VAR8;
    VAR5[0] = VAR4''; 
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
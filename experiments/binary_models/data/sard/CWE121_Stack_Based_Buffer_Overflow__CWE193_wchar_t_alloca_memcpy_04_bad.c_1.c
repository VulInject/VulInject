#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
static const int VAR5 = 1; 
static const int VAR6 = 0; 
void FUN1()
{
    wchar_t * VAR7;
    wchar_t * VAR8 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR9 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
    if(VAR5)
    {
        VAR7 = VAR8;
        VAR7[0] = VAR4''; 
    }
    {
        wchar_t VAR10[10+1] = VAR11;
        memcpy(VAR7, VAR10, (wcslen(VAR10) + 1) * sizeof(wchar_t));
        FUN3(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
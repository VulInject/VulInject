#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
wchar_t * FUN1(wchar_t * VAR5)
{
    VAR5 = (wchar_t *)malloc(10*sizeof(wchar_t));
    if (VAR5 == NULL) {FUN2(-1);}
    return VAR5;
}
void FUN3()
{
    wchar_t * VAR5;
    VAR5 = NULL;
    VAR5 = FUN1(VAR5);
    {
        wchar_t VAR6[10+1] = VAR7;
        memmove(VAR5, VAR6, (wcslen(VAR6) + 1) * sizeof(wchar_t));
        FUN4(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
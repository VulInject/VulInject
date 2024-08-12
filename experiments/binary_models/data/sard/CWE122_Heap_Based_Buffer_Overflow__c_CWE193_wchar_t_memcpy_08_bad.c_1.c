#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
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
    wchar_t * VAR5;
    VAR5 = NULL;
    if(FUN1())
    {
        VAR5 = (wchar_t *)malloc(10*sizeof(wchar_t));
        if (VAR5 == NULL) {FUN4(-1);}
    }
    {
        wchar_t VAR6[10+1] = VAR7;
        memcpy(VAR5, VAR6, (wcslen(VAR6) + 1) * sizeof(wchar_t));
        FUN5(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}
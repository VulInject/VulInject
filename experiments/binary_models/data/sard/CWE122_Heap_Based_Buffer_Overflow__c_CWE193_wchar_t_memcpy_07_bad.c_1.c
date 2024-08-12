#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
int VAR5 = 5;
void FUN1()
{
    wchar_t * VAR6;
    VAR6 = NULL;
    if(VAR5==5)
    {
        VAR6 = (wchar_t *)malloc(10*sizeof(wchar_t));
        if (VAR6 == NULL) {FUN2(-1);}
    }
    {
        wchar_t VAR7[10+1] = VAR8;
        memcpy(VAR6, VAR7, (wcslen(VAR7) + 1) * sizeof(wchar_t));
        FUN3(VAR6);
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
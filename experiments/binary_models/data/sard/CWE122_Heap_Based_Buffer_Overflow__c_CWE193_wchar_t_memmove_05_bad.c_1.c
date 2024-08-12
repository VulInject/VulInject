#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
int VAR5 = 1; 
int VAR6 = 0; 
void FUN1()
{
    wchar_t * VAR7;
    VAR7 = NULL;
    if(VAR5)
    {
        VAR7 = (wchar_t *)malloc(10*sizeof(wchar_t));
        if (VAR7 == NULL) {FUN2(-1);}
    }
    {
        wchar_t VAR8[10+1] = VAR9;
        memmove(VAR7, VAR8, (wcslen(VAR8) + 1) * sizeof(wchar_t));
        FUN3(VAR7);
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
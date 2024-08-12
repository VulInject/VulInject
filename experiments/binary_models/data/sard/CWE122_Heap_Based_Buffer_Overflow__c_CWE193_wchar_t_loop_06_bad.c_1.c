#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
static const int VAR5 = 5;
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
        size_t VAR9, VAR10;
        VAR10 = wcslen(VAR7);
        for (VAR9 = 0; VAR9 < VAR10 + 1; VAR9++)
        {
            VAR6[VAR9] = VAR7[VAR9];
        }
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
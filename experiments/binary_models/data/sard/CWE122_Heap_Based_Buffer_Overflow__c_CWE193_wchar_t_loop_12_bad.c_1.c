#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
void FUN1()
{
    wchar_t * VAR5;
    VAR5 = NULL;
    if(FUN2())
    {
        VAR5 = (wchar_t *)malloc(10*sizeof(wchar_t));
        if (VAR5 == NULL) {FUN3(-1);}
    }
    else
    {
        VAR5 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
        if (VAR5 == NULL) {FUN3(-1);}
    }
    {
        wchar_t VAR6[10+1] = VAR7;
        size_t VAR8, VAR9;
        VAR9 = wcslen(VAR6);
        for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
        {
            VAR5[VAR8] = VAR6[VAR8];
        }
        FUN4(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
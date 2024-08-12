#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
void FUN1()
{
    wchar_t * VAR5;
    VAR5 = NULL;
    VAR5 = (wchar_t *)malloc(10*sizeof(wchar_t));
    if (VAR5 == NULL) {FUN2(-1);}
    {
        wchar_t * VAR6 = VAR5;
        wchar_t * VAR5 = VAR6;
        {
            wchar_t VAR7[10+1] = VAR8;
            size_t VAR9, VAR10;
            VAR10 = wcslen(VAR7);
            for (VAR9 = 0; VAR9 < VAR10 + 1; VAR9++)
            {
                VAR5[VAR9] = VAR7[VAR9];
            }
            FUN3(VAR5);
            free(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
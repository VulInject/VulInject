#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
void FUN1()
{
    wchar_t * VAR5;
    wchar_t * *VAR6 = &VAR5;
    wchar_t * *VAR7 = &VAR5;
    VAR5 = NULL;
    {
        wchar_t * VAR5 = *VAR6;
        VAR5 = (wchar_t *)malloc(10*sizeof(wchar_t));
        if (VAR5 == NULL) {FUN2(-1);}
        *VAR6 = VAR5;
    }
    {
        wchar_t * VAR5 = *VAR7;
        {
            wchar_t VAR8[10+1] = VAR9;
            memmove(VAR5, VAR8, (wcslen(VAR8) + 1) * sizeof(wchar_t));
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
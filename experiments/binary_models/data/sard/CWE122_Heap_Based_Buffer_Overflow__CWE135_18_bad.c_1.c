#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    void * VAR4;
    VAR4 = NULL;
    goto VAR5;
VAR5:
    {
        wchar_t * VAR6 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR6 == NULL) {FUN2(-1);}
        wmemset(VAR6, VAR7'', 50-1);
        VAR6[50-1] = VAR7'';
        VAR4 = (void *)VAR6;
    }
    goto VAR8;
VAR8:
    {
        size_t VAR9 = strlen((char *)VAR4);
        void * VAR10 = (void *)calloc(VAR9+1, sizeof(wchar_t));
        if (VAR10 == NULL) {FUN2(-1);}
        (void)wcscpy(VAR10, VAR4);
        FUN3((char *)VAR10);
        free(VAR10);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
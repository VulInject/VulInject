#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(void * VAR4)
{
    {
        size_t VAR5 = strlen((char *)VAR4);
        void * VAR6 = (void *)calloc(VAR5+1, sizeof(wchar_t));
        if (VAR6 == NULL) {FUN2(-1);}
        (void)wcscpy(VAR6, VAR4);
        FUN3((char *)VAR6);
        free(VAR6);
    }
}
void FUN4()
{
    void * VAR4;
    void (*VAR7) (void *) = VAR8;
    VAR4 = NULL;
    {
        wchar_t * VAR9 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR9 == NULL) {FUN2(-1);}
        wmemset(VAR9, VAR10'', 50-1);
        VAR9[50-1] = VAR10'';
        VAR4 = (void *)VAR9;
    }
    FUN5(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN4();
    return 0;
}
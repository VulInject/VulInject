#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    void * VAR4;
    VAR4 = NULL;
    if(FUN2())
    {
        {
            wchar_t * VAR5 = (wchar_t *)malloc(50*sizeof(wchar_t));
            if (VAR5 == NULL) {FUN3(-1);}
            wmemset(VAR5, VAR6'', 50-1);
            VAR5[50-1] = VAR6'';
            VAR4 = (void *)VAR5;
        }
    }
    else
    {
        {
            char * VAR7 = (char *)malloc(50*sizeof(char));
            if (VAR7 == NULL) {FUN3(-1);}
            memset(VAR7, '', 50-1);
            VAR7[50-1] = '';
            VAR4 = (void *)VAR7;
        }
    }
    if(FUN2())
    {
        {
            size_t VAR8 = strlen((char *)VAR4);
            void * VAR9 = (void *)calloc(VAR8+1, sizeof(wchar_t));
            if (VAR9 == NULL) {FUN3(-1);}
            (void)wcscpy(VAR9, VAR4);
            FUN4((char *)VAR9);
            free(VAR9);
        }
    }
    else
    {
        {
            size_t VAR8 = wcslen((wchar_t *)VAR4);
            void * VAR9 = (void *)calloc(VAR8+1, sizeof(wchar_t));
            if (VAR9 == NULL) {FUN3(-1);}
            (void)wcscpy(VAR9, VAR4);
            FUN5((wchar_t *)VAR9);
            free(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    void * VAR4;
    VAR4 = NULL;
    if(VAR5==5)
    {
        {
            wchar_t * VAR6 = (wchar_t *)malloc(50*sizeof(wchar_t));
            if (VAR6 == NULL) {FUN2(-1);}
            wmemset(VAR6, VAR7'', 50-1);
            VAR6[50-1] = VAR7'';
            VAR4 = (void *)VAR6;
        }
    }
    if(VAR5==5)
    {
        {
            size_t VAR8 = strlen((char *)VAR4);
            void * VAR9 = (void *)calloc(VAR8+1, sizeof(wchar_t));
            if (VAR9 == NULL) {FUN2(-1);}
            (void)wcscpy(VAR9, VAR4);
            FUN3((char *)VAR9);
            free(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
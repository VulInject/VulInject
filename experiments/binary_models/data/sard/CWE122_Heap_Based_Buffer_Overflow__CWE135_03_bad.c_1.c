#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    void * VAR4;
    VAR4 = NULL;
    if(5==5)
    {
        {
            wchar_t * VAR5 = (wchar_t *)malloc(50*sizeof(wchar_t));
            if (VAR5 == NULL) {FUN2(-1);}
            wmemset(VAR5, VAR6'', 50-1);
            VAR5[50-1] = VAR6'';
            VAR4 = (void *)VAR5;
        }
    }
    if(5==5)
    {
        {
            size_t VAR7 = strlen((char *)VAR4);
            void * VAR8 = (void *)calloc(VAR7+1, sizeof(wchar_t));
            if (VAR8 == NULL) {FUN2(-1);}
            (void)wcscpy(VAR8, VAR4);
            FUN3((char *)VAR8);
            free(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
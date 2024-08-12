#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    void * VAR6;
    VAR6 = NULL;
    if(VAR4)
    {
        {
            wchar_t * VAR7 = (wchar_t *)malloc(50*sizeof(wchar_t));
            if (VAR7 == NULL) {FUN2(-1);}
            wmemset(VAR7, VAR8'', 50-1);
            VAR7[50-1] = VAR8'';
            VAR6 = (void *)VAR7;
        }
    }
    if(VAR4)
    {
        {
            size_t VAR9 = strlen((char *)VAR6);
            void * VAR10 = (void *)calloc(VAR9+1, sizeof(wchar_t));
            if (VAR10 == NULL) {FUN2(-1);}
            (void)wcscpy(VAR10, VAR6);
            FUN3((char *)VAR10);
            free(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
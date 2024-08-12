#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    void * VAR4;
    void * VAR5;
} VAR6;
void FUN1()
{
    void * VAR7;
    CWE122_Heap_Based_Buffer_Overflow__CWE135_34_unionType VAR8;
    VAR7 = NULL;
    {
        wchar_t * VAR9 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR9 == NULL) {FUN2(-1);}
        wmemset(VAR9, VAR10'', 50-1);
        VAR9[50-1] = VAR10'';
        VAR7 = (void *)VAR9;
    }
    VAR8.VAR4 = VAR7;
    {
        void * VAR7 = VAR8.VAR5;
        {
            size_t VAR11 = strlen((char *)VAR7);
            void * VAR12 = (void *)calloc(VAR11+1, sizeof(wchar_t));
            if (VAR12 == NULL) {FUN2(-1);}
            (void)wcscpy(VAR12, VAR7);
            FUN3((char *)VAR12);
            free(VAR12);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
typedef union
{
    wchar_t * VAR5;
    wchar_t * VAR6;
} VAR7;
void FUN1()
{
    wchar_t * VAR8;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_34_unionType VAR9;
    VAR8 = NULL;
    VAR8 = (wchar_t *)malloc(10*sizeof(wchar_t));
    if (VAR8 == NULL) {FUN2(-1);}
    VAR9.VAR5 = VAR8;
    {
        wchar_t * VAR8 = VAR9.VAR6;
        {
            wchar_t VAR10[10+1] = VAR11;
            memcpy(VAR8, VAR10, (wcslen(VAR10) + 1) * sizeof(wchar_t));
            FUN3(VAR8);
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
#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    wchar_t * VAR4;
    wchar_t * VAR5;
} VAR6;
void FUN1()
{
    wchar_t * VAR7;
    CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_34_unionType VAR8;
    VAR7 = NULL; 
    {
        wchar_t VAR9[100];
        wmemset(VAR9, VAR10'', 100-1); 
        VAR9[100-1] = VAR10''; 
        VAR7 = VAR9;
    }
    VAR8.VAR4 = VAR7;
    {
        wchar_t * VAR7 = VAR8.VAR5;
        FUN2(VAR7);
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    char * VAR4;
    char * VAR5;
} VAR6;
void FUN1()
{
    char * VAR7;
    CWE590_Free_Memory_Not_on_Heap__free_char_static_34_unionType VAR8;
    VAR7 = NULL; 
    {
        char VAR9[100];
        memset(VAR9, '', 100-1); 
        VAR9[100-1] = ''; 
        VAR7 = VAR9;
    }
    VAR8.VAR4 = VAR7;
    {
        char * VAR7 = VAR8.VAR5;
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
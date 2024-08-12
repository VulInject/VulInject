#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    VAR4 * VAR5;
    VAR4 * VAR6;
} VAR7;
void FUN1()
{
    VAR4 * VAR8;
    CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_34_unionType VAR9;
    VAR8 = NULL; 
    {
        int64_t VAR10[100];
        {
            size_t VAR11;
            for (VAR11 = 0; VAR11 < 100; VAR11++)
            {
                VAR10[VAR11] = 5LL;
            }
        }
        VAR8 = VAR10;
    }
    VAR9.VAR5 = VAR8;
    {
        VAR4 * VAR8 = VAR9.VAR6;
        FUN2(VAR8[0]);
        free(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
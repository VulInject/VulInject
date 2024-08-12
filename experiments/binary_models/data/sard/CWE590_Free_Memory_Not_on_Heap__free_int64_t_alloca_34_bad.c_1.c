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
    CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_34_unionType VAR9;
    VAR8 = NULL; 
    {
        VAR4 * VAR10 = (VAR4 *)FUN2(100*sizeof(VAR4));
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
        FUN3(VAR8[0]);
        free(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
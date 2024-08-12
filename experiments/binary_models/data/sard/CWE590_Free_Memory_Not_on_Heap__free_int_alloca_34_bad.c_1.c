#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    int * VAR4;
    int * VAR5;
} VAR6;
void FUN1()
{
    int * VAR7;
    CWE590_Free_Memory_Not_on_Heap__free_int_alloca_34_unionType VAR8;
    VAR7 = NULL; 
    {
        int * VAR9 = (int *)FUN2(100*sizeof(int));
        {
            size_t VAR10;
            for (VAR10 = 0; VAR10 < 100; VAR10++)
            {
                VAR9[VAR10] = 5;
            }
        }
        VAR7 = VAR9;
    }
    VAR8.VAR4 = VAR7;
    {
        int * VAR7 = VAR8.VAR5;
        FUN3(VAR7[0]);
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    long * VAR4;
    long * VAR5;
} VAR6;
void FUN1()
{
    long * VAR7;
    CWE590_Free_Memory_Not_on_Heap__free_long_static_34_unionType VAR8;
    VAR7 = NULL; 
    {
        long VAR9[100];
        {
            size_t VAR10;
            for (VAR10 = 0; VAR10 < 100; VAR10++)
            {
                VAR9[VAR10] = 5L;
            }
        }
        VAR7 = VAR9;
    }
    VAR8.VAR4 = VAR7;
    {
        long * VAR7 = VAR8.VAR5;
        FUN2(VAR7[0]);
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
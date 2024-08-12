#VAR1 ""
typedef union
{
    int * VAR2;
    int * VAR3;
} VAR4;
void FUN1()
{
    int * VAR5;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_loop_34_unionType VAR6;
    int * VAR7 = (int *)FUN2(50*sizeof(int));
    int * VAR8 = (int *)FUN2(100*sizeof(int));
    VAR5 = VAR7;
    VAR6.VAR2 = VAR5;
    {
        int * VAR5 = VAR6.VAR3;
        {
            int VAR9[100] = {0}; 
            {
                size_t VAR10;
                for (VAR10 = 0; VAR10 < 100; VAR10++)
                {
                    VAR5[VAR10] = VAR9[VAR10];
                }
                FUN3(VAR5[0]);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
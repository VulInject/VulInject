#VAR1 ""
typedef union
{
    VAR2 * VAR3;
    VAR2 * VAR4;
} VAR5;
void FUN1()
{
    VAR2 * VAR6;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_loop_34_unionType VAR7;
    VAR2 * VAR8 = (VAR2 *)FUN2(50*sizeof(VAR2));
    VAR2 * VAR9 = (VAR2 *)FUN2(100*sizeof(VAR2));
    VAR6 = VAR8;
    VAR7.VAR3 = VAR6;
    {
        VAR2 * VAR6 = VAR7.VAR4;
        {
            twoIntsStruct VAR10[100];
            {
                size_t VAR11;
                for (VAR11 = 0; VAR11 < 100; VAR11++)
                {
                    VAR10[VAR11].VAR12 = 0;
                    VAR10[VAR11].VAR13 = 0;
                }
            }
            {
                size_t VAR11;
                for (VAR11 = 0; VAR11 < 100; VAR11++)
                {
                    VAR6[VAR11] = VAR10[VAR11];
                }
                FUN3(&VAR6[0]);
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
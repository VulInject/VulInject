#VAR1 ""
typedef union
{
    VAR2 * VAR3;
    VAR2 * VAR4;
} VAR5;
void FUN1()
{
    VAR2 * VAR6;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memmove_34_unionType VAR7;
    VAR2 * VAR8 = (VAR2 *)FUN2(50*sizeof(VAR2));
    VAR2 * VAR9 = (VAR2 *)FUN2(100*sizeof(VAR2));
    VAR6 = VAR8;
    VAR7.VAR3 = VAR6;
    {
        VAR2 * VAR6 = VAR7.VAR4;
        {
            int64_t VAR10[100] = {0}; 
            memmove(VAR6, VAR10, 100*sizeof(VAR2));
            FUN3(VAR6[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
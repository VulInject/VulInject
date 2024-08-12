#VAR1 ""
typedef union
{
    VAR2 * VAR3;
    VAR2 * VAR4;
} VAR5;
void FUN1()
{
    VAR2 * VAR6;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_unionType VAR7;
    VAR6 = NULL;
    VAR6 = (VAR2 *)malloc(sizeof(VAR6));
    if (VAR6 == NULL) {FUN2(-1);}
    *VAR6 = 2147483643LL;
    VAR7.VAR3 = VAR6;
    {
        VAR2 * VAR6 = VAR7.VAR4;
        FUN3(*VAR6);
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
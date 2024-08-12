#VAR1 ""
typedef union
{
    int * VAR2;
    int * VAR3;
} VAR4;
void FUN1()
{
    int * VAR5;
    CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_34_unionType VAR6;
    VAR5 = NULL;
    VAR5 = (int *)malloc(10);
    if (VAR5 == NULL) {FUN2(-1);}
    VAR6.VAR2 = VAR5;
    {
        int * VAR5 = VAR6.VAR3;
        {
            int VAR7[10] = {0};
            memmove(VAR5, VAR7, 10*sizeof(int));
            FUN3(VAR5[0]);
            free(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
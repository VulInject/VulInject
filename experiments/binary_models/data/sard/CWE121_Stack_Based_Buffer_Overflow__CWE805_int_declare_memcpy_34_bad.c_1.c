#VAR1 ""
typedef union
{
    int * VAR2;
    int * VAR3;
} VAR4;
void FUN1()
{
    int * VAR5;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_34_unionType VAR6;
    int VAR7[50];
    int VAR8[100];
    VAR5 = VAR7;
    VAR6.VAR2 = VAR5;
    {
        int * VAR5 = VAR6.VAR3;
        {
            int VAR9[100] = {0}; 
            memcpy(VAR5, VAR9, 100*sizeof(int));
            FUN2(VAR5[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
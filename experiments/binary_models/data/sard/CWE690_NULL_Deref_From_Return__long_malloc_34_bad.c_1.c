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
    CWE690_NULL_Deref_From_Return__long_malloc_34_unionType VAR8;
    VAR7 = NULL; 
    VAR7 = (long *)malloc(1*sizeof(long));
    VAR8.VAR4 = VAR7;
    {
        long * VAR7 = VAR8.VAR5;
        VAR7[0] = 5L;
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
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
    CWE690_NULL_Deref_From_Return__struct_malloc_34_unionType VAR9;
    VAR8 = NULL; 
    VAR8 = (VAR4 *)malloc(1*sizeof(VAR4));
    VAR9.VAR5 = VAR8;
    {
        VAR4 * VAR8 = VAR9.VAR6;
        VAR8[0].VAR10 = 1;
        VAR8[0].VAR11 = 1;
        FUN2(&VAR8[0]);
        free(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
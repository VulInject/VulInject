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
    CWE476_NULL_Pointer_Dereference__long_34_unionType VAR8;
    VAR7 = NULL;
    VAR8.VAR4 = VAR7;
    {
        long * VAR7 = VAR8.VAR5;
        FUN2(*VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
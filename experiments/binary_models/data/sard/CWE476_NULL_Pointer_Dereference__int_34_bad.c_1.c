#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    int * VAR4;
    int * VAR5;
} VAR6;
void FUN1()
{
    int * VAR7;
    CWE476_NULL_Pointer_Dereference__int_34_unionType VAR8;
    VAR7 = NULL;
    VAR8.VAR4 = VAR7;
    {
        int * VAR7 = VAR8.VAR5;
        FUN2(*VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
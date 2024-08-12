#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    char * VAR4;
    char * VAR5;
} VAR6;
void FUN1()
{
    char * VAR7;
    CWE476_NULL_Pointer_Dereference__char_34_unionType VAR8;
    VAR7 = NULL;
    VAR8.VAR4 = VAR7;
    {
        char * VAR7 = VAR8.VAR5;
        FUN2(VAR7[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
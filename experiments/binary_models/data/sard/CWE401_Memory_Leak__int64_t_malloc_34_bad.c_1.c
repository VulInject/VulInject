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
    CWE401_Memory_Leak__int64_t_malloc_34_unionType VAR9;
    VAR8 = NULL;
    VAR8 = (VAR4 *)malloc(100*sizeof(VAR4));
    if (VAR8 == NULL) {FUN2(-1);}
    VAR8[0] = 5LL;
    FUN3(VAR8[0]);
    VAR9.VAR5 = VAR8;
    {
        VAR4 * VAR8 = VAR9.VAR6;
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
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
    CWE690_NULL_Deref_From_Return__char_malloc_34_unionType VAR8;
    VAR7 = NULL; 
    VAR7 = (char *)malloc(20*sizeof(char));
    VAR8.VAR4 = VAR7;
    {
        char * VAR7 = VAR8.VAR5;
        strcpy(VAR7, "");
        FUN2(VAR7);
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
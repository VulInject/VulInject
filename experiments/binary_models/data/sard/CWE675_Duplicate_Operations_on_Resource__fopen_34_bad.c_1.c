#VAR1 ""
typedef union
{
    VAR2 * VAR3;
    VAR2 * VAR4;
} VAR5;
void FUN1()
{
    VAR2 * VAR6;
    CWE675_Duplicate_Operations_on_Resource__fopen_34_unionType VAR7;
    VAR6 = NULL; 
    VAR6 = fopen("", "");
    fclose(VAR6);
    VAR7.VAR3 = VAR6;
    {
        VAR2 * VAR6 = VAR7.VAR4;
        fclose(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN2(NULL) );
    FUN1();
    return 0;
}
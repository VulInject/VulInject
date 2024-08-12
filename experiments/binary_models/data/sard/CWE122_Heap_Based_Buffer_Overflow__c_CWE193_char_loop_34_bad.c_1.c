#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
typedef union
{
    char * VAR5;
    char * VAR6;
} VAR7;
void FUN1()
{
    char * VAR8;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_34_unionType VAR9;
    VAR8 = NULL;
    VAR8 = (char *)malloc(10*sizeof(char));
    if (VAR8 == NULL) {FUN2(-1);}
    VAR9.VAR5 = VAR8;
    {
        char * VAR8 = VAR9.VAR6;
        {
            char VAR10[10+1] = VAR4;
            size_t VAR11, VAR12;
            VAR12 = strlen(VAR10);
            for (VAR11 = 0; VAR11 < VAR12 + 1; VAR11++)
            {
                VAR8[VAR11] = VAR10[VAR11];
            }
            FUN3(VAR8);
            free(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
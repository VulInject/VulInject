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
    CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_34_unionType VAR9;
    char * VAR10 = (char *)FUN2((10)*sizeof(char));
    char * VAR11 = (char *)FUN2((10+1)*sizeof(char));
    VAR8 = VAR10;
    VAR8[0] = ''; 
    VAR9.VAR5 = VAR8;
    {
        char * VAR8 = VAR9.VAR6;
        {
            char VAR12[10+1] = VAR4;
            size_t VAR13, VAR14;
            VAR14 = strlen(VAR12);
            for (VAR13 = 0; VAR13 < VAR14 + 1; VAR13++)
            {
                VAR8[VAR13] = VAR12[VAR13];
            }
            FUN3(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
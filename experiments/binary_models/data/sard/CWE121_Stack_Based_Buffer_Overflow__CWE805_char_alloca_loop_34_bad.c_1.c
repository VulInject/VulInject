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
    CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_loop_34_unionType VAR8;
    char * VAR9 = (char *)FUN2(50*sizeof(char));
    char * VAR10 = (char *)FUN2(100*sizeof(char));
    VAR7 = VAR9;
    VAR7[0] = ''; 
    VAR8.VAR4 = VAR7;
    {
        char * VAR7 = VAR8.VAR5;
        {
            size_t VAR11;
            char VAR12[100];
            memset(VAR12, '', 100-1); 
            VAR12[100-1] = ''; 
            for (VAR11 = 0; VAR11 < 100; VAR11++)
            {
                VAR7[VAR11] = VAR12[VAR11];
            }
            VAR7[100-1] = ''; 
            FUN3(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
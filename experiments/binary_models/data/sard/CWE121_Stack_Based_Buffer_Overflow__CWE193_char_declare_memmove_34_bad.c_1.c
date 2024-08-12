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
    CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_34_unionType VAR9;
    char VAR10[10];
    char VAR11[10+1];
    VAR8 = VAR10;
    VAR8[0] = ''; 
    VAR9.VAR5 = VAR8;
    {
        char * VAR8 = VAR9.VAR6;
        {
            char VAR12[10+1] = VAR4;
            memmove(VAR8, VAR12, (strlen(VAR12) + 1) * sizeof(char));
            FUN2(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
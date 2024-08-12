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
    CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_ncpy_34_unionType VAR8;
    char VAR9[50];
    char VAR10[100];
    VAR7 = VAR9;
    VAR7[0] = ''; 
    VAR8.VAR4 = VAR7;
    {
        char * VAR7 = VAR8.VAR5;
        {
            char VAR11[100];
            memset(VAR11, '', 100-1); 
            VAR11[100-1] = ''; 
            strncpy(VAR7, VAR11, 100-1);
            VAR7[100-1] = ''; 
            FUN2(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
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
    CWE127_Buffer_Underread__char_declare_loop_34_unionType VAR8;
    char VAR9[100];
    memset(VAR9, '', 100-1);
    VAR9[100-1] = '';
    VAR7 = VAR9 - 8;
    VAR8.VAR4 = VAR7;
    {
        char * VAR7 = VAR8.VAR5;
        {
            size_t VAR10;
            char VAR11[100];
            memset(VAR11, '', 100-1); 
            VAR11[100-1] = ''; 
            for (VAR10 = 0; VAR10 < 100; VAR10++)
            {
                VAR11[VAR10] = VAR7[VAR10];
            }
            VAR11[100-1] = '';
            FUN2(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
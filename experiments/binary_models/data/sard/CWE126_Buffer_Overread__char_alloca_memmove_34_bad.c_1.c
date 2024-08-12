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
    CWE126_Buffer_Overread__char_alloca_memmove_34_unionType VAR8;
    char * VAR9 = (char *)FUN2(50*sizeof(char));
    char * VAR10 = (char *)FUN2(100*sizeof(char));
    memset(VAR9, '', 50-1); 
    VAR9[50-1] = ''; 
    memset(VAR10, '', 100-1); 
    VAR10[100-1] = ''; 
    VAR7 = VAR9;
    VAR8.VAR4 = VAR7;
    {
        char * VAR7 = VAR8.VAR5;
        {
            char VAR11[100];
            memset(VAR11, '', 100-1);
            VAR11[100-1] = ''; 
            memmove(VAR11, VAR7, strlen(VAR11)*sizeof(char));
            VAR11[100-1] = '';
            FUN3(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
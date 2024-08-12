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
    CWE401_Memory_Leak__strdup_char_34_unionType VAR8;
    VAR7 = NULL;
    {
        char VAR9[] = "";
        VAR7 = strdup(VAR9);
        FUN2(VAR7);
    }
    VAR8.VAR4 = VAR7;
    {
        char * VAR7 = VAR8.VAR5;
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
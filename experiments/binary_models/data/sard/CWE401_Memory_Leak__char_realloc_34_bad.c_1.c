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
    CWE401_Memory_Leak__char_realloc_34_unionType VAR8;
    VAR7 = NULL;
    VAR7 = (char *)realloc(VAR7, 100*sizeof(char));
    if (VAR7 == NULL) {FUN2(-1);}
    strcpy(VAR7, "");
    FUN3(VAR7);
    VAR8.VAR4 = VAR7;
    {
        char * VAR7 = VAR8.VAR5;
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
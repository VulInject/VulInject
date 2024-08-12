#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
#define VAR5 ''
typedef union
{
    char * VAR6;
    char * VAR7;
} VAR8;
void FUN1()
{
    char * VAR9;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_34_unionType VAR10;
    VAR9 = (char *)malloc(100*sizeof(char));
    if (VAR9 == NULL) {FUN2(-1);}
    VAR9[0] = '';
    {
        size_t VAR11 = strlen(VAR9);
        char * VAR12 = FUN3(VAR4);
        if (VAR12 != NULL)
        {
            strncat(VAR9+VAR11, VAR12, 100-VAR11-1);
        }
    }
    VAR10.VAR6 = VAR9;
    {
        char * VAR9 = VAR10.VAR7;
        for (; *VAR9 != ''; VAR9++)
        {
            if (*VAR9 == VAR5)
            {
                break;
            }
        }
        free(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
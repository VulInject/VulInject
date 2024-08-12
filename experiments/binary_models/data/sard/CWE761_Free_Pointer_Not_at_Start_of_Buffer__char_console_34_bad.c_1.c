#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ''
typedef union
{
    char * VAR5;
    char * VAR6;
} VAR7;
void FUN1()
{
    char * VAR8;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_34_unionType VAR9;
    VAR8 = (char *)malloc(100*sizeof(char));
    if (VAR8 == NULL) {FUN2(-1);}
    VAR8[0] = '';
    {
        size_t VAR10 = strlen(VAR8);
        if (100-VAR10 > 1)
        {
            if (fgets(VAR8+VAR10, (int)(100-VAR10), stdin) != NULL)
            {
                VAR10 = strlen(VAR8);
                if (VAR10 > 0 && VAR8[VAR10-1] == '')
                {
                    VAR8[VAR10-1] = '';
                }
            }
            else
            {
                VAR8[VAR10] = '';
            }
        }
    }
    VAR9.VAR5 = VAR8;
    {
        char * VAR8 = VAR9.VAR6;
        for (; *VAR8 != ''; VAR8++)
        {
            if (*VAR8 == VAR4)
            {
                break;
            }
        }
        free(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
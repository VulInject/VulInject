#VAR1 ""
typedef union
{
    VAR2 * VAR3;
    VAR2 * VAR4;
} VAR5;
void FUN1()
{
    VAR2 * VAR6;
    CWE404_Improper_Resource_Shutdown__fopen_w32_close_34_unionType VAR7;
    VAR6 = NULL;
    VAR6 = fopen("", "");
    VAR7.VAR3 = VAR6;
    {
        VAR2 * VAR6 = VAR7.VAR4;
        if (VAR6 != NULL)
        {
            FUN2((int)VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
typedef union
{
    char * VAR5;
    char * VAR6;
} VAR7;
void FUN1()
{
    char * VAR8;
    CWE606_Unchecked_Loop_Condition__char_file_34_unionType VAR9;
    char VAR10[100] = "";
    VAR8 = VAR10;
    {
        size_t VAR11 = strlen(VAR8);
        VAR12 * VAR13;
        if (100-VAR11 > 1)
        {
            VAR13 = fopen(VAR4, "");
            if (VAR13 != NULL)
            {
                if (fgets(VAR8+VAR11, (int)(100-VAR11), VAR13) == NULL)
                {
                    VAR8[VAR11] = '';
                }
                fclose(VAR13);
            }
        }
    }
    VAR9.VAR5 = VAR8;
    {
        char * VAR8 = VAR9.VAR6;
        {
            int VAR14, VAR15, VAR16;
            if (sscanf(VAR8, "", &VAR15) == 1)
            {
                VAR16 = 0;
                for (VAR14 = 0; VAR14 < VAR15; VAR14++)
                {
                    VAR16++; 
                }
                FUN2(VAR16);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
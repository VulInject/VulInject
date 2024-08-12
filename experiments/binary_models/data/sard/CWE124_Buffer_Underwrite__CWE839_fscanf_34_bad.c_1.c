#VAR1 ""
typedef union
{
    int VAR2;
    int VAR3;
} VAR4;
void FUN1()
{
    int VAR5;
    CWE124_Buffer_Underwrite__CWE839_fscanf_34_unionType VAR6;
    VAR5 = -1;
    fscanf(stdin, "", &VAR5);
    VAR6.VAR2 = VAR5;
    {
        int VAR5 = VAR6.VAR3;
        {
            int VAR7;
            int VAR8[10] = { 0 };
            if (VAR5 < 10)
            {
                VAR8[VAR5] = 1;
                for(VAR7 = 0; VAR7 < 10; VAR7++)
                {
                    FUN2(VAR8[VAR7]);
                }
            }
            else
            {
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
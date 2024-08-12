#VAR1 ""
typedef union
{
    int VAR2;
    int VAR3;
} VAR4;
void FUN1()
{
    int VAR5;
    CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_34_unionType VAR6;
    VAR5 = -1;
    VAR5 = FUN2();
    VAR6.VAR2 = VAR5;
    {
        int VAR5 = VAR6.VAR3;
        {
            char VAR7[100];
            char VAR8[100] = "";
            memset(VAR7, '', 100-1);
            VAR7[100-1] = '';
            if (VAR5 < 100)
            {
                strncpy(VAR8, VAR7, VAR5);
                VAR8[VAR5] = ''; 
            }
            FUN3(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
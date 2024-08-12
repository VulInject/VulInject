#VAR1 ""
typedef union
{
    short VAR2;
    short VAR3;
} VAR4;
void FUN1()
{
    short VAR5;
    CWE194_Unexpected_Sign_Extension__negative_strncpy_34_unionType VAR6;
    VAR5 = 0;
    VAR5 = -1;
    VAR6.VAR2 = VAR5;
    {
        short VAR5 = VAR6.VAR3;
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
            FUN2(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
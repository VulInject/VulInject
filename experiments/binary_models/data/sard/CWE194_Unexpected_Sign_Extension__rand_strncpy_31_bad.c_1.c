#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    VAR2 = (short)FUN2();
    {
        short VAR3 = VAR2;
        short VAR2 = VAR3;
        {
            char VAR4[100];
            char VAR5[100] = "";
            memset(VAR4, '', 100-1);
            VAR4[100-1] = '';
            if (VAR2 < 100)
            {
                strncpy(VAR5, VAR4, VAR2);
                VAR5[VAR2] = ''; 
            }
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
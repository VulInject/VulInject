#VAR1 ""
void FUN1()
{
    short VAR2;
    short *VAR3 = &VAR2;
    short *VAR4 = &VAR2;
    VAR2 = 0;
    {
        short VAR2 = *VAR3;
        VAR2 = (short)FUN2();
        *VAR3 = VAR2;
    }
    {
        short VAR2 = *VAR4;
        {
            char VAR5[100];
            char VAR6[100] = "";
            memset(VAR5, '', 100-1);
            VAR5[100-1] = '';
            if (VAR2 < 100)
            {
                memcpy(VAR6, VAR5, VAR2);
                VAR6[VAR2] = ''; 
            }
            FUN3(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
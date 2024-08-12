#VAR1 ""
#define CHAR_ARRAY_SIZE 8
void FUN1()
{
    short VAR2;
    short *VAR3 = &VAR2;
    short *VAR4 = &VAR2;
    VAR2 = 0;
    {
        short VAR2 = *VAR3;
        {
            char VAR5[VAR6] = "";
            if (fgets(VAR5, VAR6, stdin) != NULL)
            {
                VAR2 = (short)FUN2(VAR5);
            }
            else
            {
            }
        }
        *VAR3 = VAR2;
    }
    {
        short VAR2 = *VAR4;
        {
            char VAR7[100];
            char VAR8[100] = "";
            memset(VAR7, '', 100-1);
            VAR7[100-1] = '';
            if (VAR2 < 100)
            {
                memmove(VAR8, VAR7, VAR2);
                VAR8[VAR2] = ''; 
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
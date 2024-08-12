#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char VAR5[100] = "";
    VAR4 = VAR5;
    goto VAR6;
VAR6:
    {
        size_t VAR7 = strlen(VAR4);
        if (100-VAR7 > 1)
        {
            if (fgets(VAR4+VAR7, (int)(100-VAR7), stdin) != NULL)
            {
                VAR7 = strlen(VAR4);
                if (VAR7 > 0 && VAR4[VAR7-1] == '')
                {
                    VAR4[VAR7-1] = '';
                }
            }
            else
            {
                VAR4[VAR7] = '';
            }
        }
    }
    goto VAR8;
VAR8:
    {
        int VAR9, VAR10, VAR11;
        if (sscanf(VAR4, "", &VAR10) == 1)
        {
            VAR11 = 0;
            for (VAR9 = 0; VAR9 < VAR10; VAR9++)
            {
                VAR11++; 
            }
            FUN2(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
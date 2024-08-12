#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
int VAR3 = 1; 
int VAR4 = 0; 
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    if(VAR3)
    {
        {
            char VAR5[VAR6] = "";
            if (fgets(VAR5, VAR6, stdin) != NULL)
            {
                VAR2 = FUN3(VAR5);
            }
            else
            {
            }
        }
    }
    if(VAR3)
    {
        {
            int VAR7[10] = { 0 };
            if (VAR2 < 10)
            {
                FUN4(VAR7[VAR2]);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}
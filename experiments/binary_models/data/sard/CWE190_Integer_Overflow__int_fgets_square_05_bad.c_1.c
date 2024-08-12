#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
#VAR1 <VAR3.VAR4>
int VAR5 = 1; 
int VAR6 = 0; 
void FUN2()
{
    int VAR2;
    VAR2 = 0;
    if(VAR5)
    {
        {
            char VAR7[VAR8] = "";
            if (fgets(VAR7, VAR8, stdin) != NULL)
            {
                VAR2 = FUN3(VAR7);
            }
            else
            {
            }
        }
    }
    if(VAR5)
    {
        {
            int VAR9 = VAR2 * VAR2;
            FUN4(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}
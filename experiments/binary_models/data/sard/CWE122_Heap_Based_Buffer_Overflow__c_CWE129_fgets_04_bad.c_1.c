#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
static const int VAR3 = 1; 
static const int VAR4 = 0; 
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
            int VAR7;
            int * VAR8 = (int *)malloc(10 * sizeof(int));
            if (VAR8 == NULL) {FUN4(-1);}
            for (VAR7 = 0; VAR7 < 10; VAR7++)
            {
                VAR8[VAR7] = 0;
            }
            if (VAR2 >= 0)
            {
                VAR8[VAR2] = 1;
                for(VAR7 = 0; VAR7 < 10; VAR7++)
                {
                    FUN5(VAR8[VAR7]);
                }
            }
            else
            {
            }
            free(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}
#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
static const int VAR3 = 5;
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    if(VAR3==5)
    {
        {
            char VAR4[VAR5] = "";
            if (fgets(VAR4, VAR5, stdin) != NULL)
            {
                VAR2 = FUN3(VAR4);
            }
            else
            {
            }
        }
    }
    if(VAR3==5)
    {
        {
            int VAR6;
            int VAR7[10] = { 0 };
            if (VAR2 >= 0)
            {
                VAR7[VAR2] = 1;
                for(VAR6 = 0; VAR6 < 10; VAR6++)
                {
                    FUN4(VAR7[VAR6]);
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
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}
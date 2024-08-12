#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    if(1)
    {
        {
            char VAR3[VAR4] = "";
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                VAR2 = FUN3(VAR3);
            }
            else
            {
            }
        }
    }
    if(1)
    {
        {
            size_t VAR5 = 0;
            for (VAR5 = 0; VAR5 < (VAR6)VAR2; VAR5++)
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}
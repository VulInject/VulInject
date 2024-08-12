#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2()
{
    int VAR2;
    VAR2 = -1;
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
    {
        int VAR5 = VAR2;
        int VAR2 = VAR5;
        {
            size_t VAR6 = 0;
            for (VAR6 = 0; VAR6 < (VAR7)VAR2; VAR6++)
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
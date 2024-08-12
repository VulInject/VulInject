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
            size_t VAR7 = 0;
            for (VAR7 = 0; VAR7 < (VAR8)VAR2; VAR7++)
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
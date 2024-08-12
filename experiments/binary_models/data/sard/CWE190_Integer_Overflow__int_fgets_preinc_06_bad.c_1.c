#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
static const int VAR3 = 5;
void FUN2()
{
    int VAR2;
    VAR2 = 0;
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
            ++VAR2;
            int VAR6 = VAR2;
            FUN4(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}
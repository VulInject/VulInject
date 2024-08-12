#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2(int VAR2)
{
    if(VAR2 < 0) 
    {
        int VAR3 = VAR2 * 2;
        FUN3(VAR3);
    }
}
void FUN4()
{
    int VAR2;
    void (*VAR4) (int) = VAR5;
    VAR2 = 0;
    {
        char VAR6[VAR7] = "";
        if (fgets(VAR6, VAR7, stdin) != NULL)
        {
            VAR2 = FUN5(VAR6);
        }
        else
        {
        }
    }
    FUN6(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}
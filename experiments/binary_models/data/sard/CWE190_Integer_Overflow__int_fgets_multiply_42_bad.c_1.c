#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
int FUN2(int VAR2)
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
    return VAR2;
}
void FUN4()
{
    int VAR2;
    VAR2 = 0;
    VAR2 = FUN2(VAR2);
    if(VAR2 > 0) 
    {
        int VAR5 = VAR2 * 2;
        FUN5(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN4();
    return 0;
}
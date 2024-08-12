#VAR1 ""
void FUN1()
{
    int VAR2;
    int *VAR3 = &VAR2;
    int *VAR4 = &VAR2;
    VAR2 = 0;
    {
        int VAR2 = *VAR3;
        VAR2 = FUN2();
        *VAR3 = VAR2;
    }
    {
        int VAR2 = *VAR4;
        {
            VAR2--;
            int VAR5 = VAR2;
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
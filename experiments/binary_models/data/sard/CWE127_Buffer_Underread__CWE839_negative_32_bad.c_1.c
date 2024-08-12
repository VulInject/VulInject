#VAR1 ""
void FUN1()
{
    int VAR2;
    int *VAR3 = &VAR2;
    int *VAR4 = &VAR2;
    VAR2 = -1;
    {
        int VAR2 = *VAR3;
        VAR2 = -5;
        *VAR3 = VAR2;
    }
    {
        int VAR2 = *VAR4;
        {
            int VAR5[10] = { 0 };
            if (VAR2 < 10)
            {
                FUN2(VAR5[VAR2]);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int VAR4;
    int *VAR5 = &VAR4;
    int *VAR6 = &VAR4;
    VAR4 = 0;
    {
        int VAR4 = *VAR5;
        VAR4 = FUN2();
        *VAR5 = VAR4;
    }
    {
        int VAR4 = *VAR6;
        {
            int VAR7 = VAR4 * VAR4;
            FUN3(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
void FUN1(VAR2 * VAR3)
{
    {
        int64_t VAR4[100] = {0}; 
        {
            size_t VAR5;
            for (VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR3[VAR5] = VAR4[VAR5];
            }
            FUN2(VAR3[0]);
        }
    }
}
void FUN3()
{
    VAR2 * VAR3;
    int64_t VAR6[50];
    int64_t VAR7[100];
    VAR3 = VAR6;
    FUN1(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}
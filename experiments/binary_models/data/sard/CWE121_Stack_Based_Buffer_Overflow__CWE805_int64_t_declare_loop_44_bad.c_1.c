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
    void (*VAR6) (VAR2 *) = VAR7;
    int64_t VAR8[50];
    int64_t VAR9[100];
    VAR3 = VAR8;
    FUN4(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(VAR4 * VAR5)
{
    FUN2(VAR5[0]);
    free(VAR5);
}
void FUN3()
{
    VAR4 * VAR5;
    void (*VAR6) (VAR4 *) = VAR7;
    VAR5 = NULL; 
    {
        int64_t VAR8[100];
        {
            size_t VAR9;
            for (VAR9 = 0; VAR9 < 100; VAR9++)
            {
                VAR8[VAR9] = 5LL;
            }
        }
        VAR5 = VAR8;
    }
    FUN4(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
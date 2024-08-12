#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    VAR4 * *VAR6 = &VAR5;
    VAR4 * *VAR7 = &VAR5;
    VAR5 = NULL; 
    {
        VAR4 * VAR5 = *VAR6;
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
        *VAR6 = VAR5;
    }
    {
        VAR4 * VAR5 = *VAR7;
        FUN2(VAR5[0]);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
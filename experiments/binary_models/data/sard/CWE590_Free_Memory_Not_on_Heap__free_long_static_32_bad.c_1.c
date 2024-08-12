#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long * VAR4;
    long * *VAR5 = &VAR4;
    long * *VAR6 = &VAR4;
    VAR4 = NULL; 
    {
        long * VAR4 = *VAR5;
        {
            long VAR7[100];
            {
                size_t VAR8;
                for (VAR8 = 0; VAR8 < 100; VAR8++)
                {
                    VAR7[VAR8] = 5L;
                }
            }
            VAR4 = VAR7;
        }
        *VAR5 = VAR4;
    }
    {
        long * VAR4 = *VAR6;
        FUN2(VAR4[0]);
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
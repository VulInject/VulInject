#VAR1 ""
void FUN1()
{
    int * VAR2;
    int * *VAR3 = &VAR2;
    int * *VAR4 = &VAR2;
    int * VAR5 = (int *)FUN2(50*sizeof(int));
    int * VAR6 = (int *)FUN2(100*sizeof(int));
    {
        int * VAR2 = *VAR3;
        VAR2 = VAR5;
        *VAR3 = VAR2;
    }
    {
        int * VAR2 = *VAR4;
        {
            int VAR7[100] = {0}; 
            {
                size_t VAR8;
                for (VAR8 = 0; VAR8 < 100; VAR8++)
                {
                    VAR2[VAR8] = VAR7[VAR8];
                }
                FUN3(VAR2[0]);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
void FUN1()
{
    int * VAR2;
    int * VAR3 = (int *)FUN2(50*sizeof(int));
    int * VAR4 = (int *)FUN2(100*sizeof(int));
    VAR2 = VAR3;
    {
        int * VAR5 = VAR2;
        int * VAR2 = VAR5;
        {
            int VAR6[100] = {0}; 
            {
                size_t VAR7;
                for (VAR7 = 0; VAR7 < 100; VAR7++)
                {
                    VAR2[VAR7] = VAR6[VAR7];
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
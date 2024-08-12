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
            memmove(VAR2, VAR7, 100*sizeof(int));
            FUN3(VAR2[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
void FUN1(int * VAR2)
{
    {
        int VAR3[100] = {0}; 
        memcpy(VAR2, VAR3, 100*sizeof(int));
        FUN2(VAR2[0]);
    }
}
void FUN3()
{
    int * VAR2;
    void (*VAR4) (int *) = VAR5;
    int * VAR6 = (int *)FUN4(50*sizeof(int));
    int * VAR7 = (int *)FUN4(100*sizeof(int));
    VAR2 = VAR6;
    FUN5(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}
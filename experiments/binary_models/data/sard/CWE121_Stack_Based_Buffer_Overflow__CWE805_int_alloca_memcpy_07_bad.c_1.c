#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    int * VAR3;
    int * VAR4 = (int *)FUN2(50*sizeof(int));
    int * VAR5 = (int *)FUN2(100*sizeof(int));
    if(VAR2==5)
    {
        VAR3 = VAR4;
    }
    {
        int VAR6[100] = {0}; 
        memcpy(VAR3, VAR6, 100*sizeof(int));
        FUN3(VAR3[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
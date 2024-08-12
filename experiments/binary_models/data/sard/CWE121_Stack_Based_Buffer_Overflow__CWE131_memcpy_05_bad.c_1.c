#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    int * VAR4;
    VAR4 = NULL;
    if(VAR2)
    {
        VAR4 = (int *)FUN2(10);
    }
    {
        int VAR5[10] = {0};
        memcpy(VAR4, VAR5, 10*sizeof(int));
        FUN3(VAR4[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
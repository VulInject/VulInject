#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    int * VAR3;
    VAR3 = NULL;
    if(VAR2==5)
    {
        VAR3 = (int *)FUN2(10);
    }
    {
        int VAR4[10] = {0};
        memmove(VAR3, VAR4, 10*sizeof(int));
        FUN3(VAR3[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
void FUN1()
{
    int * VAR2;
    VAR2 = NULL;
    if(FUN2())
    {
        VAR2 = (int *)FUN3(10);
    }
    else
    {
        VAR2 = (int *)FUN3(10*sizeof(int));
    }
    {
        int VAR3[10] = {0};
        memmove(VAR2, VAR3, 10*sizeof(int));
        FUN4(VAR2[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
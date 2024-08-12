#VAR1 ""
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    int * VAR2;
    VAR2 = NULL;
    if(FUN1())
    {
        VAR2 = (int *)malloc(10);
        if (VAR2 == NULL) {FUN4(-1);}
    }
    {
        int VAR3[10] = {0};
        memmove(VAR2, VAR3, 10*sizeof(int));
        FUN5(VAR2[0]);
        free(VAR2);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}
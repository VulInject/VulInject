#VAR1 ""
void FUN1(int * VAR2)
{
    {
        int VAR3[10] = {0};
        memcpy(VAR2, VAR3, 10*sizeof(int));
        FUN2(VAR2[0]);
        free(VAR2);
    }
}
void FUN3()
{
    int * VAR2;
    VAR2 = NULL;
    VAR2 = (int *)malloc(10);
    if (VAR2 == NULL) {FUN4(-1);}
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}
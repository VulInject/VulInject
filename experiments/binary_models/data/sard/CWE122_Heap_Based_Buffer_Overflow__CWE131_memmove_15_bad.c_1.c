#VAR1 ""
void FUN1()
{
    int * VAR2;
    VAR2 = NULL;
    switch(6)
    {
    case 6:
        VAR2 = (int *)malloc(10);
        if (VAR2 == NULL) {FUN2(-1);}
        break;
    default:
        break;
    }
    {
        int VAR3[10] = {0};
        memmove(VAR2, VAR3, 10*sizeof(int));
        FUN3(VAR2[0]);
        free(VAR2);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
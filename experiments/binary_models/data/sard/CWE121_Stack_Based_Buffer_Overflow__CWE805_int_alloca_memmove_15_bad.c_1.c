#VAR1 ""
void FUN1()
{
    int * VAR2;
    int * VAR3 = (int *)FUN2(50*sizeof(int));
    int * VAR4 = (int *)FUN2(100*sizeof(int));
    switch(6)
    {
    case 6:
        VAR2 = VAR3;
        break;
    default:
        break;
    }
    {
        int VAR5[100] = {0}; 
        memmove(VAR2, VAR5, 100*sizeof(int));
        FUN3(VAR2[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
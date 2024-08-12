#VAR1 ""
void FUN1()
{
    int * VAR2;
    int VAR3[50];
    int VAR4[100];
    if(1)
    {
        VAR2 = VAR3;
    }
    {
        int VAR5[100] = {0}; 
        memmove(VAR2, VAR5, 100*sizeof(int));
        FUN2(VAR2[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
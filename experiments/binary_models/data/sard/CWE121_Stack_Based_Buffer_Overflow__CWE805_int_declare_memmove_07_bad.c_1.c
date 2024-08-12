#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    int * VAR3;
    int VAR4[50];
    int VAR5[100];
    if(VAR2==5)
    {
        VAR3 = VAR4;
    }
    {
        int VAR6[100] = {0}; 
        memmove(VAR3, VAR6, 100*sizeof(int));
        FUN2(VAR3[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
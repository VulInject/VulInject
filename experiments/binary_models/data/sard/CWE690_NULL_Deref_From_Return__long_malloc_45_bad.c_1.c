#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long * VAR4;
    VAR4 = NULL; 
    VAR4 = (long *)malloc(1*sizeof(long));
    if(VAR5)
    {
        VAR4[0] = 5L;
        FUN2(VAR4[0]);
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
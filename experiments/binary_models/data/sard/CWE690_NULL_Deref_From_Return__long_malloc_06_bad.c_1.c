#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    long * VAR5;
    VAR5 = NULL; 
    VAR5 = (long *)malloc(1*sizeof(long));
    if(VAR4==5)
    {
        VAR5[0] = 5L;
        FUN2(VAR5[0]);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
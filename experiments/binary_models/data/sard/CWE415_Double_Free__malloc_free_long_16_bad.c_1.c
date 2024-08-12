#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long * VAR4;
    VAR4 = NULL;
    while(1)
    {
        VAR4 = (long *)malloc(100*sizeof(long));
        if (VAR4 == NULL) {FUN2(-1);}
        free(VAR4);
        break;
    }
    while(1)
    {
        free(VAR4);
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
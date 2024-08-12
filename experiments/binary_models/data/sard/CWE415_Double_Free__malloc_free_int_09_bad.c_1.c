#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int * VAR4;
    VAR4 = NULL;
    if(VAR5)
    {
        VAR4 = (int *)malloc(100*sizeof(int));
        if (VAR4 == NULL) {FUN2(-1);}
        free(VAR4);
    }
    if(VAR5)
    {
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
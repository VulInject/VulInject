#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long * VAR4;
    VAR4 = NULL;
    switch(6)
    {
    case 6:
        VAR4 = (long *)malloc(100*sizeof(long));
        if (VAR4 == NULL) {FUN2(-1);}
        free(VAR4);
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
        free(VAR4);
        break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
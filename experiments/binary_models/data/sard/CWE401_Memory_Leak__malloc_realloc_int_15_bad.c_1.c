#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        int * VAR4 = (int *)malloc(100*sizeof(int));
        if (VAR4 == NULL) {FUN2(-1);}
        VAR4[0] = 5;
        FUN3(VAR4[0]);
        VAR4 = (int *)realloc(VAR4, (130000)*sizeof(int));
        if (VAR4 != NULL)
        {
            VAR4[0] = 10;
            FUN3(VAR4[0]);
            free(VAR4);
        }
    }
    break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
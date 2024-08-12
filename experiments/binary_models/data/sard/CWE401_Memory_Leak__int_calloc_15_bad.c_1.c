#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int * VAR4;
    VAR4 = NULL;
    switch(6)
    {
    case 6:
        VAR4 = (int *)calloc(100, sizeof(int));
        if (VAR4 == NULL) {FUN2(-1);}
        VAR4[0] = 5;
        FUN3(VAR4[0]);
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
        ; 
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
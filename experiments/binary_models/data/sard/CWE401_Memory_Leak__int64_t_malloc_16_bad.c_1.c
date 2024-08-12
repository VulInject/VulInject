#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    VAR5 = NULL;
    while(1)
    {
        VAR5 = (VAR4 *)malloc(100*sizeof(VAR4));
        if (VAR5 == NULL) {FUN2(-1);}
        VAR5[0] = 5LL;
        FUN3(VAR5[0]);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    VAR5 = NULL;
    if(FUN2())
    {
        VAR5 = (VAR4 *)malloc(100*sizeof(VAR4));
        if (VAR5 == NULL) {FUN3(-1);}
        VAR5[0] = 5LL;
        FUN4(VAR5[0]);
    }
    else
    {
        VAR5 = (VAR4 *)FUN5(100*sizeof(VAR4));
        VAR5[0] = 5LL;
        FUN4(VAR5[0]);
    }
    if(FUN2())
    {
        ; 
    }
    else
    {
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}
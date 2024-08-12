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
        free(VAR5);
    }
    else
    {
        VAR5 = (VAR4 *)malloc(100*sizeof(VAR4));
        if (VAR5 == NULL) {FUN3(-1);}
    }
    if(FUN2())
    {
        free(VAR5);
    }
    else
    {
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
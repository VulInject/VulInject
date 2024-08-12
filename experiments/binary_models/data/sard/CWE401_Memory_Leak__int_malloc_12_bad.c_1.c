#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int * VAR4;
    VAR4 = NULL;
    if(FUN2())
    {
        VAR4 = (int *)malloc(100*sizeof(int));
        if (VAR4 == NULL) {FUN3(-1);}
        VAR4[0] = 5;
        FUN4(VAR4[0]);
    }
    else
    {
        VAR4 = (int *)FUN5(100*sizeof(int));
        VAR4[0] = 5;
        FUN4(VAR4[0]);
    }
    if(FUN2())
    {
        ; 
    }
    else
    {
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}
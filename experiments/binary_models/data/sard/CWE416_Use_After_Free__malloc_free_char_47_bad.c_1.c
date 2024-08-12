#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL;
    if(FUN2())
    {
        VAR4 = (char *)malloc(100*sizeof(char));
        if (VAR4 == NULL) {FUN3(-1);}
        memset(VAR4, '', 100-1);
        VAR4[100-1] = '';
        free(VAR4);
    }
    else
    {
        VAR4 = (char *)malloc(100*sizeof(char));
        if (VAR4 == NULL) {FUN3(-1);}
        memset(VAR4, '', 100-1);
        VAR4[100-1] = '';
    }
    if(FUN2())
    {
        FUN4(VAR4);
    }
    else
    {
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
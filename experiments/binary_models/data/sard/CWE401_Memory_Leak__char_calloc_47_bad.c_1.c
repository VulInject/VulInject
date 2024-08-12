#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL;
    if(FUN2())
    {
        VAR4 = (char *)calloc(100, sizeof(char));
        if (VAR4 == NULL) {FUN3(-1);}
        strcpy(VAR4, "");
        FUN4(VAR4);
    }
    else
    {
        VAR4 = (char *)FUN5(100*sizeof(char));
        strcpy(VAR4, "");
        FUN4(VAR4);
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
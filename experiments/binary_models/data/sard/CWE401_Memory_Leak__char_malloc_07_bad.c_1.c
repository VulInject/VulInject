#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    char * VAR5;
    VAR5 = NULL;
    if(VAR4==5)
    {
        VAR5 = (char *)malloc(100*sizeof(char));
        if (VAR5 == NULL) {FUN2(-1);}
        strcpy(VAR5, "");
        FUN3(VAR5);
    }
    if(VAR4==5)
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
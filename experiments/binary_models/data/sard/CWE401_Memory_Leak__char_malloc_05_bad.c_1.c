#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    char * VAR6;
    VAR6 = NULL;
    if(VAR4)
    {
        VAR6 = (char *)malloc(100*sizeof(char));
        if (VAR6 == NULL) {FUN2(-1);}
        strcpy(VAR6, "");
        FUN3(VAR6);
    }
    if(VAR4)
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
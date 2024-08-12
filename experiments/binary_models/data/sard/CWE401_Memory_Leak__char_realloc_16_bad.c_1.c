#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL;
    while(1)
    {
        VAR4 = (char *)realloc(VAR4, 100*sizeof(char));
        if (VAR4 == NULL) {FUN2(-1);}
        strcpy(VAR4, "");
        FUN3(VAR4);
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
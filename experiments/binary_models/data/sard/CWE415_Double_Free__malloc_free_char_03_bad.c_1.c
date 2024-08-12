#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL;
    if(5==5)
    {
        VAR4 = (char *)malloc(100*sizeof(char));
        if (VAR4 == NULL) {FUN2(-1);}
        free(VAR4);
    }
    if(5==5)
    {
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
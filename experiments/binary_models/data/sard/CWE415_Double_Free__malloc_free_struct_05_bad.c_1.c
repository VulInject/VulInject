#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    VAR6 * VAR7;
    VAR7 = NULL;
    if(VAR4)
    {
        VAR7 = (VAR6 *)malloc(100*sizeof(VAR6));
        if (VAR7 == NULL) {FUN2(-1);}
        free(VAR7);
    }
    if(VAR4)
    {
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
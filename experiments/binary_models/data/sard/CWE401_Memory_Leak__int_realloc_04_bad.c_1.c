#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    int * VAR6;
    VAR6 = NULL;
    if(VAR4)
    {
        VAR6 = (int *)realloc(VAR6, 100*sizeof(int));
        if (VAR6 == NULL) {FUN2(-1);}
        VAR6[0] = 5;
        FUN3(VAR6[0]);
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
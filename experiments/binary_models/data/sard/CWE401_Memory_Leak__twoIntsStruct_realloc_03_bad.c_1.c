#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    VAR5 = NULL;
    if(5==5)
    {
        VAR5 = (VAR4 *)realloc(VAR5, 100*sizeof(VAR4));
        if (VAR5 == NULL) {FUN2(-1);}
        VAR5[0].VAR6 = 0;
        VAR5[0].VAR7 = 0;
        FUN3(&VAR5[0]);
    }
    if(5==5)
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
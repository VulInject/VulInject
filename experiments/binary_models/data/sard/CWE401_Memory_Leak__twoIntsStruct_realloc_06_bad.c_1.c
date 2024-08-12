#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    VAR5 * VAR6;
    VAR6 = NULL;
    if(VAR4==5)
    {
        VAR6 = (VAR5 *)realloc(VAR6, 100*sizeof(VAR5));
        if (VAR6 == NULL) {FUN2(-1);}
        VAR6[0].VAR7 = 0;
        VAR6[0].VAR8 = 0;
        FUN3(&VAR6[0]);
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
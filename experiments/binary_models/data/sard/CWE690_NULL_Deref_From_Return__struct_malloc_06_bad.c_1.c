#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    VAR5 * VAR6;
    VAR6 = NULL; 
    VAR6 = (VAR5 *)malloc(1*sizeof(VAR5));
    if(VAR4==5)
    {
        VAR6[0].VAR7 = 1;
        VAR6[0].VAR8 = 1;
        FUN2(&VAR6[0]);
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
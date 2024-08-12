#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    VAR5 = NULL; 
    VAR5 = (VAR4 *)malloc(1*sizeof(VAR4));
    if(VAR6)
    {
        VAR5[0].VAR7 = 1;
        VAR5[0].VAR8 = 1;
        FUN2(&VAR5[0]);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
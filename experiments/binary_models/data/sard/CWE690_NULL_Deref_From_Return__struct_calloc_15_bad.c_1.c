#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    VAR5 = NULL; 
    VAR5 = (VAR4 *)calloc(1, sizeof(VAR4));
    switch(6)
    {
    case 6:
        VAR5[0].VAR6 = 1;
        VAR5[0].VAR7 = 1;
        FUN2(&VAR5[0]);
        free(VAR5);
        break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
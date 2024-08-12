#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    VAR3 * VAR4;
    VAR4 = NULL;
    if(VAR2==5)
    {
        VAR4 = (VAR3 *)malloc(sizeof(VAR4));
        if (VAR4 == NULL) {FUN2(-1);}
        VAR4->VAR5 = 1;
        VAR4->VAR6 = 2;
    }
    FUN3(VAR4);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
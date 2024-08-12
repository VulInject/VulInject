#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    VAR5 * VAR6;
    VAR6 = NULL;
    if(VAR4==5)
    {
        VAR6 = (VAR5 *)malloc(100*sizeof(VAR5));
        if (VAR6 == NULL) {FUN2(-1);}
        free(VAR6);
    }
    if(VAR4==5)
    {
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
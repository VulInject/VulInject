#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    int * VAR6;
    VAR6 = NULL; 
    VAR6 = (int *)calloc(1, sizeof(int));
    if(VAR4)
    {
        VAR6[0] = 5;
        FUN2(VAR6[0]);
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}
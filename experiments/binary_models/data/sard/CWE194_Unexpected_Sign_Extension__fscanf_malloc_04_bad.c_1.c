#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    short VAR4;
    VAR4 = 0;
    if(VAR2)
    {
        fscanf (stdin, "", &VAR4);
    }
    if (VAR4 < 100)
    {
        char * VAR5 = (char *)malloc(VAR4);
        if (VAR5 == NULL) {FUN2(-1);}
        memset(VAR5, '', VAR4-1);
        VAR5[VAR4-1] = '';
        FUN3(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
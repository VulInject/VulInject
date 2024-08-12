#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    short VAR3;
    VAR3 = 0;
    if(VAR2==5)
    {
        fscanf (stdin, "", &VAR3);
    }
    if (VAR3 < 100)
    {
        char * VAR4 = (char *)malloc(VAR3);
        if (VAR4 == NULL) {FUN2(-1);}
        memset(VAR4, '', VAR3-1);
        VAR4[VAR3-1] = '';
        FUN3(VAR4);
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}
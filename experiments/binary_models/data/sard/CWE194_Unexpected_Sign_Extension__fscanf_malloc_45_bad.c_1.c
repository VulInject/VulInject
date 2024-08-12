#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    if(VAR3)
    {
        fscanf (stdin, "", &VAR2);
    }
    if (VAR2 < 100)
    {
        char * VAR4 = (char *)malloc(VAR2);
        if (VAR4 == NULL) {FUN2(-1);}
        memset(VAR4, '', VAR2-1);
        VAR4[VAR2-1] = '';
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
#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    int VAR3;
    VAR3 = -1;
    if(VAR2==5)
    {
        VAR3 = FUN2();
    }
    if (VAR3 < 100)
    {
        char * VAR4 = (char *)malloc(VAR3);
        if (VAR4 == NULL) {FUN3(-1);}
        memset(VAR4, '', VAR3-1);
        VAR4[VAR3-1] = '';
        FUN4(VAR4);
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
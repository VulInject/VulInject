#VAR1 ""
void FUN1(short VAR2)
{
    if (VAR2 < 100)
    {
        char * VAR3 = (char *)malloc(VAR2);
        if (VAR3 == NULL) {FUN2(-1);}
        memset(VAR3, '', VAR2-1);
        VAR3[VAR2-1] = '';
        FUN3(VAR3);
        free(VAR3);
    }
}
void FUN4()
{
    short VAR2;
    VAR2 = 0;
    VAR2 = -1;
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN4();
    return 0;
}
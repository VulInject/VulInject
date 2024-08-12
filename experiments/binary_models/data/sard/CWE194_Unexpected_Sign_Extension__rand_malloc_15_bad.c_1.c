#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    switch(6)
    {
    case 6:
        VAR2 = (short)FUN2();
        break;
    default:
        break;
    }
    if (VAR2 < 100)
    {
        char * VAR3 = (char *)malloc(VAR2);
        if (VAR3 == NULL) {FUN3(-1);}
        memset(VAR3, '', VAR2-1);
        VAR3[VAR2-1] = '';
        FUN4(VAR3);
        free(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
#VAR1 ""
void FUN1()
{
    int VAR2;
    int *VAR3 = &VAR2;
    int *VAR4 = &VAR2;
    VAR2 = -1;
    {
        int VAR2 = *VAR3;
        VAR2 = FUN2();
        *VAR3 = VAR2;
    }
    {
        int VAR2 = *VAR4;
        if (VAR2 < 100)
        {
            char * VAR5 = (char *)malloc(VAR2);
            if (VAR5 == NULL) {FUN3(-1);}
            memset(VAR5, '', VAR2-1);
            VAR5[VAR2-1] = '';
            FUN4(VAR5);
            free(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}
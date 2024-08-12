static void FUN1(const char *VAR1)
{
    char *VAR2;
    int VAR3 = 0;
    VAR4 = FUN2(VAR1, &VAR2, 0);
    switch (*VAR2)
    {
    case '':
    case '':
        VAR3 = 10;
        break;
    case '':
        VAR3 = 20;
        break;
    case '':
        VAR3 = 30;
        break;
    }
    if (VAR3)
    {
        unsigned long VAR5 = VAR4;
        VAR2++;
        VAR4 <<= VAR3;
        if (VAR4 >> VAR3 != VAR5 || (VAR6 && VAR4 > VAR6))
        {
            fprintf(VAR7, "");
            FUN3(VAR8);
        }
    }
    if (*VAR2)
    {
        fprintf(VAR7, "", VAR2);
        FUN3(VAR8);
    }
}
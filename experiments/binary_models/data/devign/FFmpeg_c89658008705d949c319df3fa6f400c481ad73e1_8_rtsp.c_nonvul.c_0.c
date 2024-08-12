static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    int VAR4, VAR5, VAR6;
    VAR5 = 0;
    VAR6 = 1;
    for (;;)
    {
        FUN2(&VAR3);
        if (*VAR3 == '')
            break;
        VAR4 = FUN3((unsigned char)*VAR3++);
        if (VAR4 >= '' && VAR4 <= '')
            VAR4 = VAR4 - '';
        else if (VAR4 >= '' && VAR4 <= '')
            VAR4 = VAR4 - '' + 10;
        else
            break;
        VAR6 = (VAR6 << 4) | VAR4;
        if (VAR6 & 0x100)
        {
            if (VAR2)
                VAR2[VAR5] = VAR6;
            VAR5++;
            VAR6 = 1;
        }
    }
    return VAR5;
}
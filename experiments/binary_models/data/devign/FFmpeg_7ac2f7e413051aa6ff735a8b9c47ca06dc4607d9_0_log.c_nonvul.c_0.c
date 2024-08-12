static void FUN1(int VAR1, int VAR2, const char *VAR3)
{
    int VAR4;
    if (!*VAR3)
        return;
    if (VAR5 < 0)
        FUN2();
    if (VAR1 == VAR6 / 8)
        VAR4 = 0;
    else
        VAR4 = VAR5;
    if (VAR4)
        FUN3(VAR7, VAR8 | VAR9[VAR1]);
    fputs(VAR3, VAR10);
    if (VAR4)
        FUN3(VAR7, VAR11);
    if (VAR4 == 1)
    {
        fprintf(VAR10, "", (VAR9[VAR1] >> 4) & 15, VAR9[VAR1] & 15, VAR3);
    }
    else if (VAR2 && VAR5 == 256)
    {
        fprintf(VAR10, "", (VAR9[VAR1] >> 16) & 0xff, VAR2, VAR3);
    }
    else if (VAR4 == 256)
    {
        fprintf(VAR10, "", (VAR9[VAR1] >> 16) & 0xff, (VAR9[VAR1] >> 8) & 0xff, VAR3);
    }
    else
        fputs(VAR3, VAR10);
}
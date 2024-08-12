static void FUN1(int VAR1, const char *VAR2)
{
    if (!*VAR2)
        return;
    if (VAR3 < 0)
        FUN2();
    if (VAR3 && VAR1 != VAR4 / 8)
        FUN3(VAR5, VAR6 | VAR7[VAR1]);
    fputs(VAR2, VAR8);
    if (VAR3 && VAR1 != VAR4 / 8)
        FUN3(VAR5, VAR9);
    if (VAR3 == 1 && VAR1 != VAR4 / 8)
    {
        fprintf(VAR8, "", (VAR7[VAR1] >> 4) & 15, VAR7[VAR1] & 15, VAR2);
    }
    else if (VAR3 == 256 && VAR1 != VAR4 / 8)
    {
        fprintf(VAR8, "", (VAR7[VAR1] >> 16) & 0xff, (VAR7[VAR1] >> 8) & 0xff, VAR2);
    }
    else
        fputs(VAR2, VAR8);
}
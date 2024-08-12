static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR1;
    FUN2("", VAR2, VAR3);
    if (VAR3)
        VAR5->VAR6[VAR2] |= VAR5->VAR7;
    else
        VAR5->VAR6[VAR2] &= ~VAR5->VAR7;
    FUN3(VAR5);
}
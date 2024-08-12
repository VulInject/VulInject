void FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    if (VAR3 >= 5 || VAR3 < 0)
        FUN2("", VAR6, VAR4, VAR3);
    if (VAR5)
        VAR2->VAR7[VAR3] |= 1 << VAR4;
    else
        VAR2->VAR7[VAR3] &= ~(1 << VAR4);
    FUN3(VAR2);
}
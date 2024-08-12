static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    struct VAR4 *VAR5 = VAR1;
    if (VAR5->VAR6 & (1 << VAR2) && VAR5->VAR7[VAR8] & 2)
    {
        VAR5->VAR7[VAR9] |= (VAR3 << VAR2);
    }
    VAR5->VAR10 &= ~(1 << VAR2);
    VAR5->VAR10 |= VAR3 << VAR2;
    FUN2(VAR5);
}
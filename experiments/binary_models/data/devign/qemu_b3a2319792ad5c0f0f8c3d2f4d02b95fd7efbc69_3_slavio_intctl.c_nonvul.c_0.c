static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR1;
    uint32_t VAR6 = 1 << VAR2;
    uint32_t VAR7 = VAR5->VAR8[VAR2];
    FUN2("", VAR5->VAR9, VAR2, VAR7, VAR3);
    if (VAR7 > 0)
    {
        if (VAR3)
        {
            VAR5->VAR10 |= VAR6;
            VAR5->VAR11[VAR5->VAR9] |= 1 << VAR7;
        }
        else
        {
            VAR5->VAR10 &= ~VAR6;
            VAR5->VAR11[VAR5->VAR9] &= ~(1 << VAR7);
        }
        FUN3(VAR5);
    }
}
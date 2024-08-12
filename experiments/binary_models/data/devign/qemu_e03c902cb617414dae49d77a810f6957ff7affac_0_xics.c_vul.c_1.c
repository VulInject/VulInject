static void FUN1(struct VAR1 *VAR2, int VAR3, uint8_t VAR4)
{
    struct VAR5 *VAR6 = VAR2->VAR6 + VAR3;
    uint8_t VAR7;
    uint32_t VAR8;
    VAR7 = FUN2(VAR6);
    VAR6->VAR9 = (VAR6->VAR9 & ~VAR10) | (VAR4 << 24);
    if (VAR4 < VAR7)
    {
        if (FUN3(VAR6) && (VAR4 <= VAR6->VAR11))
        {
            VAR8 = FUN3(VAR6);
            VAR6->VAR9 &= ~VAR12;
            FUN4(VAR6->VAR13);
            FUN5(VAR2->VAR14, VAR8);
        }
    }
    else
    {
        if (!FUN3(VAR6))
        {
            FUN6(VAR2, VAR3);
        }
    }
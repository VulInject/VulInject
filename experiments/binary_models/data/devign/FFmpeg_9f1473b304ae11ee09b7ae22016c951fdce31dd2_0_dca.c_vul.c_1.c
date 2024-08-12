static int FUN1(VAR1 *VAR2, int VAR3, VAR1 *VAR4, int VAR5)
{
    uint32_t VAR6;
    int VAR7, VAR8;
    VAR9 *VAR10 = (VAR9 *)VAR2, *VAR11 = (VAR9 *)VAR4;
    PutBitContext VAR12;
    VAR6 = FUN2(VAR2);
    switch (VAR6)
    {
    case VAR13:
        memcpy(VAR4, VAR2, FUN3(VAR3, VAR5));
        return FUN3(VAR3, VAR5);
    case VAR14:
        for (VAR7 = 0; VAR7 < (FUN3(VAR3, VAR5) + 1) >> 1; VAR7++)
            *VAR11++ = FUN4(*VAR10++);
        return FUN3(VAR3, VAR5);
    case VAR15:
    case VAR16:
        FUN5(&VAR12, VAR4, VAR5);
        for (VAR7 = 0; VAR7 < (VAR3 + 1) >> 1; VAR7++, VAR2 += 2)
        {
            VAR8 = ((VAR6 == VAR15) ? FUN6(VAR2) : FUN7(VAR2)) & 0x3FFF;
            FUN8(&VAR12, 14, VAR8);
        }
        FUN9(&VAR12);
        return (FUN10(&VAR12) + 7) >> 3;
    default:
    }
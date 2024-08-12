int FUN1(const VAR1 *VAR2, int VAR3, VAR1 *VAR4, int VAR5)
{
    uint32_t VAR6;
    int VAR7, VAR8;
    const VAR9 *VAR10 = (const VAR9 *)VAR2;
    VAR9 *VAR11 = (VAR9 *)VAR4;
    PutBitContext VAR12;
    if ((unsigned)VAR3 > (unsigned)VAR5)
        VAR3 = VAR5;
    VAR6 = FUN2(VAR2);
    switch (VAR6)
    {
    case VAR13:
        memcpy(VAR4, VAR2, VAR3);
        return VAR3;
    case VAR14:
        for (VAR7 = 0; VAR7 < (VAR3 + 1) >> 1; VAR7++)
            *VAR11++ = FUN3(*VAR10++);
        return VAR3;
    case VAR15:
    case VAR16:
        FUN4(&VAR12, VAR4, VAR5);
        for (VAR7 = 0; VAR7 < (VAR3 + 1) >> 1; VAR7++, VAR2 += 2)
        {
            VAR8 = ((VAR6 == VAR15) ? FUN5(VAR2) : FUN6(VAR2)) & 0x3FFF;
            FUN7(&VAR12, 14, VAR8);
        }
        FUN8(&VAR12);
        return (FUN9(&VAR12) + 7) >> 3;
    default:
        return VAR17;
    }
}
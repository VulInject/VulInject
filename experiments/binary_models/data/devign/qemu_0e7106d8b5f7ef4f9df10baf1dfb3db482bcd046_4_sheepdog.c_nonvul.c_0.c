static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5, int VAR6, int VAR7)
{
    bool VAR8;
    int VAR9, VAR10 = 0, VAR11 = VAR6;
    unsigned int VAR12;
    uint64_t VAR13;
    uint32_t VAR14;
    uint64_t VAR15;
    VAR9 = FUN2(VAR2->VAR16, VAR2->VAR17);
    if (VAR9 < 0)
    {
        return VAR9;
    }
    while (VAR11)
    {
        VAR14 = VAR5 / VAR18;
        VAR15 = VAR5 % VAR18;
        VAR12 = FUN3(VAR11, VAR18 - VAR15);
        VAR13 = FUN4(VAR2->VAR19.VAR20, VAR14);
        VAR8 = (VAR15 == 0);
        if (VAR7)
        {
            VAR10 = FUN5(VAR9, (char *)VAR4, VAR13, VAR2->VAR19.VAR21, VAR12, VAR15, VAR2->VAR22);
        }
        else
        {
            VAR10 = FUN6(VAR9, (char *)VAR4, VAR13, VAR2->VAR19.VAR21, VAR12, VAR15, VAR8, VAR2->VAR22);
        }
        if (VAR10 < 0)
        {
            FUN7("", strerror(VAR23));
            goto VAR24;
        }
        VAR5 += VAR12;
        VAR4 += VAR12;
        VAR11 -= VAR12;
    }
    VAR10 = VAR6;
VAR24:
    FUN8(VAR9);
    return VAR10;
}
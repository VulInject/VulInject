static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3);
    int VAR9;
    VAR4 *VAR10;
    uint32_t VAR11;
    if ((VAR8->VAR12 & VAR13) == 0)
        return -1;
    if (VAR8->VAR14 >= 31)
    {
        return 0;
    }
    FUN3("", VAR6);
    VAR9 = VAR8->VAR15 + VAR8->VAR14;
    if (VAR9 >= 31)
        VAR9 -= 31;
    VAR8->VAR14++;
    VAR8->VAR16[VAR9].VAR17 = VAR6 + 6;
    VAR10 = VAR8->VAR16[VAR9].VAR18;
    *(VAR10++) = (VAR6 + 6);
    *(VAR10++) = (VAR6 + 6) >> 8;
    memcpy(VAR10, VAR5, VAR6);
    VAR10 += VAR6;
    VAR11 = FUN4(~0, VAR5, VAR6);
    *(VAR10++) = VAR11;
    *(VAR10++) = VAR11 >> 8;
    *(VAR10++) = VAR11 >> 16;
    *(VAR10++) = VAR11 >> 24;
    if ((VAR6 & 3) != 2)
    {
        memset(VAR10, 0, (6 - VAR6) & 3);
    }
    VAR8->VAR19 |= VAR20;
    FUN5(VAR8);
    return VAR6;
}
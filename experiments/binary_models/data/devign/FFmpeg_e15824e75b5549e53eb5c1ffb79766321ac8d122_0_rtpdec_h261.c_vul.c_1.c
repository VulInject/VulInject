int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, const VAR11 *VAR12, int VAR13, uint16_t VAR14, int VAR15)
{
    int VAR16, VAR17, VAR18, VAR19, VAR20;
    int VAR21;
    if (VAR4->VAR12 && VAR4->VAR10 != *VAR10)
    {
        FUN2(&VAR4->VAR12);
    }
    if (VAR13 < 5)
    {
        FUN3(VAR2, VAR22, "");
        return VAR23;
    }
    VAR16 = (VAR12[0] >> 5) & 0x07;
    VAR17 = (VAR12[0] >> 2) & 0x07;
    VAR18 = (VAR12[1] >> 4) & 0x0f;
    VAR19 = ((VAR12[1] << 1) & 0x1e) | ((VAR12[1] >> 7) & 0x01);
    VAR20 = (VAR12[1] >> 4) & 0x0f;
    VAR12 += VAR24;
    VAR13 -= VAR24;
    if (!VAR4->VAR12)
    {
        if (!VAR18 && !VAR16 && !VAR19 && !VAR20)
        {
            VAR21 = FUN4(&VAR4->VAR12);
            if (VAR21 < 0)
                return VAR21;
            VAR4->VAR10 = *VAR10;
        }
        else
        {
            return FUN5(VAR25);
        }
    }
    if (VAR4->VAR26 || VAR16)
    {
        if (VAR4->VAR26 == VAR16)
        {
            VAR4->VAR27 |= VAR12[0] & (0xff >> VAR16);
            VAR4->VAR26 = 0;
            VAR12++;
            VAR13--;
            FUN6(VAR4->VAR12, VAR4->VAR27);
        }
        else
        {
            GetBitContext VAR28;
            FUN7(&VAR28, VAR12, VAR13 * 8 - VAR17);
            FUN8(&VAR28, VAR16);
            if (VAR4->VAR26)
            {
                VAR4->VAR27 |= FUN9(&VAR28, 8 - VAR4->VAR26);
                FUN6(VAR4->VAR12, VAR4->VAR27);
            }
            while (FUN10(&VAR28) >= 8)
                FUN6(VAR4->VAR12, FUN9(&VAR28, 8));
            VAR4->VAR26 = FUN10(&VAR28);
            if (VAR4->VAR26)
                VAR4->VAR27 = FUN9(&VAR28, VAR4->VAR26) << (8 - VAR4->VAR26);
            VAR17 = 0;
            VAR13 = 0;
        }
    }
    if (VAR17)
    {
        if (VAR13 > 0)
            FUN11(VAR4->VAR12, VAR12, VAR13 - 1);
        VAR4->VAR26 = 8 - VAR17;
        VAR4->VAR27 = VAR12[VAR13 - 1] & (0xff << VAR17);
    }
    else
    {
        FUN11(VAR4->VAR12, VAR12, VAR13);
    }
    if (!(VAR15 & VAR29))
        return FUN5(VAR25);
    if (VAR4->VAR26)
        FUN6(VAR4->VAR12, VAR4->VAR27);
    VAR4->VAR26 = 0;
    VAR21 = FUN12(VAR8, &VAR4->VAR12, VAR6->VAR30);
    if (VAR21 < 0)
        return VAR21;
    return 0;
}
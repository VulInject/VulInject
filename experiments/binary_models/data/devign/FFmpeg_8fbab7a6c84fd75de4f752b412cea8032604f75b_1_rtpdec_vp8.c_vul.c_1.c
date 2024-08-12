static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, const VAR11 *VAR12, int VAR13, uint16_t VAR14, int VAR15)
{
    int VAR16, VAR17;
    int VAR18, VAR19;
    int VAR20 = 0, VAR21 = 0, VAR22 = 0, VAR23 = 0;
    int VAR24 = -1, VAR25 = 0;
    int VAR26 = 0;
    uint32_t VAR27;
    if (!VAR12)
    {
        if (VAR4->VAR28)
        {
            int VAR29 = FUN2(VAR8, &VAR4->VAR28, VAR6->VAR30);
            if (VAR29 < 0)
                return VAR29;
            *VAR10 = VAR4->VAR10;
            if (VAR4->VAR31)
                VAR8->VAR15 |= VAR32;
            return 0;
        }
        return FUN3(VAR33);
    }
    if (VAR13 < 1)
        return VAR34;
    VAR18 = VAR12[0] & 0x80;
    VAR16 = VAR12[0] & 0x10;
    VAR19 = VAR12[0] & 0x0f;
    VAR17 = VAR15 & VAR35;
    VAR12++;
    VAR13--;
    if (VAR18)
    {
        if (VAR13 < 1)
            return VAR34;
        VAR20 = VAR12[0] & 0x80;
        VAR21 = VAR12[0] & 0x40;
        VAR22 = VAR12[0] & 0x20;
        VAR23 = VAR12[0] & 0x10;
        VAR12++;
        VAR13--;
    }
    if (VAR20)
    {
        if (VAR13 < 1)
            return VAR34;
        if (VAR12[0] & 0x80)
        {
            if (VAR13 < 2)
                return VAR34;
            VAR24 = FUN4(VAR12) & 0x7fff;
            VAR25 = 0x7fff;
            VAR12 += 2;
            VAR13 -= 2;
        }
        else
        {
            VAR24 = VAR12[0] & 0x7f;
            VAR25 = 0x7f;
            VAR12++;
            VAR13--;
        }
    }
    if (VAR21)
    {
        VAR12++;
        VAR13--;
    }
    if (VAR22 || VAR23)
    {
        VAR12++;
        VAR13--;
    }
    if (VAR13 < 1)
        return VAR34;
    if (VAR16 && VAR19 == 0 && VAR13 >= 3)
    {
        int VAR36;
        int VAR37 = VAR12[0] & 0x01;
        if (!VAR37)
        {
            FUN5(VAR4);
            VAR4->VAR38 = 1;
            VAR4->VAR31 = 0;
            VAR4->VAR39 = 1;
        }
        else
        {
            int VAR40 = VAR4->VAR28 && !VAR4->VAR41 && FUN6(VAR4->VAR28) >= VAR4->VAR42;
            if (!VAR4->VAR38)
                return FUN3(VAR33);
            if (!VAR4->VAR39)
                return FUN7(VAR2, VAR4, "");
            if (VAR24 >= 0)
            {
                if (VAR24 != ((VAR4->VAR43 + 1) & VAR25))
                {
                    return FUN7(VAR2, VAR4, "");
                }
                else
                {
                    if (VAR4->VAR28 && !VAR40)
                        return FUN7(VAR2, VAR4, "");
                }
            }
            else
            {
                uint16_t VAR44 = VAR4->VAR45 + 1;
                int16_t VAR46 = VAR14 - VAR44;
                if (VAR4->VAR28)
                {
                    if ((VAR46 == 0 || VAR46 == 1) && VAR40)
                    {
                    }
                    else
                    {
                        return FUN7(VAR2, VAR4, "");
                    }
                }
                else
                {
                    if (VAR46 != 0)
                        return FUN7(VAR2, VAR4, "");
                }
            }
            if (VAR4->VAR28)
            {
                VAR4->VAR31 = 1;
                if (FUN6(VAR4->VAR28) >= VAR4->VAR42)
                {
                    int VAR29 = FUN2(VAR8, &VAR4->VAR28, VAR6->VAR30);
                    if (VAR29 < 0)
                        return VAR29;
                    VAR8->VAR15 |= VAR32;
                    VAR26 = 1;
                    VAR27 = VAR4->VAR10;
                }
                else
                {
                    FUN5(VAR4);
                }
            }
        }
        VAR4->VAR42 = (FUN8(&VAR12[1]) << 3 | VAR12[0] >> 5) + 3;
        if ((VAR36 = FUN9(&VAR4->VAR28)) < 0)
            return VAR36;
        VAR4->VAR10 = *VAR10;
        VAR4->VAR47 = 0;
        VAR4->VAR43 = VAR24;
        VAR4->VAR41 = !VAR37;
    }
    else
    {
        uint16_t VAR44 = VAR4->VAR45 + 1;
        if (!VAR4->VAR38)
            return FUN3(VAR33);
        if (VAR4->VAR10 != *VAR10)
        {
            return FUN7(VAR2, VAR4, "");
        }
        if (VAR14 != VAR44)
        {
            if (VAR4->VAR41)
            {
                return FUN7(VAR2, VAR4, "");
            }
            else if (VAR4->VAR28 && FUN6(VAR4->VAR28) >= VAR4->VAR42)
            {
                VAR4->VAR47 = 1;
                VAR4->VAR31 = 1;
            }
            else
            {
                return FUN7(VAR2, VAR4, "");
            }
        }
    }
    if (!VAR4->VAR28)
        return FUN7(VAR2, VAR4, "");
    VAR4->VAR45 = VAR14;
    if (!VAR4->VAR47)
        FUN10(VAR4->VAR28, VAR12, VAR13);
    if (VAR26)
    {
        *VAR10 = VAR27;
        return VAR17 ? 1 : 0;
    }
    if (VAR17)
    {
        int VAR29;
        VAR29 = FUN2(VAR8, &VAR4->VAR28, VAR6->VAR30);
        if (VAR29 < 0)
            return VAR29;
        if (VAR4->VAR31)
            VAR8->VAR15 |= VAR32;
        return 0;
    }
    return FUN3(VAR33);
}
static int FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    bool VAR4 = false;
    if (FUN2(VAR2->VAR5, &VAR3, sizeof(VAR3)) != sizeof(VAR3))
    {
        FUN3("");
        return -VAR6;
    }
    FUN4("");
    FUN5(&VAR3);
    if (VAR3 & VAR7)
    {
        FUN4("");
        VAR4 = true;
        VAR3 &= ~VAR7;
    }
    if (VAR3 != 0)
    {
        FUN4("" VAR8 "", VAR3);
        return -VAR6;
    }
    while (1)
    {
        int VAR9;
        uint32_t VAR10, VAR11;
        uint64_t VAR12;
        if (FUN2(VAR2->VAR5, &VAR12, sizeof(VAR12)) != sizeof(VAR12))
        {
            FUN3("");
            return -VAR13;
        }
        FUN4("");
        if (VAR12 != FUN6(VAR14))
        {
            FUN3("");
            return -VAR13;
        }
        if (FUN2(VAR2->VAR5, &VAR10, sizeof(VAR10)) != sizeof(VAR10))
        {
            FUN3("");
            return -VAR13;
        }
        VAR10 = FUN7(VAR10);
        if (FUN2(VAR2->VAR5, &VAR11, sizeof(VAR11)) != sizeof(VAR11))
        {
            FUN3("");
            return -VAR13;
        }
        VAR11 = FUN7(VAR11);
        FUN4("" VAR8, VAR10);
        if (VAR2->VAR15 && VAR2->VAR5 == (VAR16 *)VAR2->VAR17)
        {
            VAR16 *VAR18;
            if (!VAR4)
            {
                FUN4("" VAR8, VAR10);
                return -VAR13;
            }
            switch (VAR10)
            {
            case VAR19:
                VAR18 = FUN8(VAR2, VAR11);
                if (!VAR18)
                {
                    return -VAR6;
                }
                FUN9(FUN10(VAR2->VAR5));
                VAR2->VAR5 = FUN11(VAR18);
                break;
            case VAR20:
                FUN4("", VAR10);
                return -VAR13;
            default:
                FUN4("" VAR8 "", VAR10);
                if (FUN12(VAR2->VAR5, VAR11) != VAR11)
                {
                    return -VAR6;
                }
                FUN13(VAR2->VAR5, VAR21, VAR10);
                break;
            }
        }
        else if (VAR4)
        {
            switch (VAR10)
            {
            case VAR22:
                VAR9 = FUN14(VAR2, VAR11);
                if (VAR9 < 0)
                {
                    return VAR9;
                }
                break;
            case VAR23:
                return -VAR13;
            case VAR20:
                return FUN15(VAR2, VAR11);
            case VAR19:
                if (FUN12(VAR2->VAR5, VAR11) != VAR11)
                {
                    return -VAR6;
                }
                if (VAR2->VAR15)
                {
                    FUN4("");
                    FUN13(VAR2->VAR5, VAR24, VAR10);
                }
                else
                {
                    FUN4("");
                    FUN13(VAR2->VAR5, VAR25, VAR10);
                }
                break;
            default:
                FUN4("" VAR8, VAR10);
                if (FUN12(VAR2->VAR5, VAR11) != VAR11)
                {
                    return -VAR6;
                }
                FUN13(VAR2->VAR5, VAR26, VAR10);
                break;
            }
        }
        else
        {
            switch (VAR10)
            {
            case VAR20:
                return FUN15(VAR2, VAR11);
            default:
                FUN4("" VAR8, VAR10);
                return -VAR13;
            }
        }
    }
}
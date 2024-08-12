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
        FUN4("", VAR3);
        return -VAR6;
    }
    while (1)
    {
        int VAR8;
        uint32_t VAR9, VAR10;
        uint64_t VAR11;
        if (FUN2(VAR2->VAR5, &VAR11, sizeof(VAR11)) != sizeof(VAR11))
        {
            FUN3("");
            return -VAR12;
        }
        FUN4("");
        if (VAR11 != FUN6(VAR13))
        {
            FUN3("");
            return -VAR12;
        }
        if (FUN2(VAR2->VAR5, &VAR9, sizeof(VAR9)) != sizeof(VAR9))
        {
            FUN3("");
            return -VAR12;
        }
        VAR9 = FUN7(VAR9);
        if (FUN2(VAR2->VAR5, &VAR10, sizeof(VAR10)) != sizeof(VAR10))
        {
            FUN3("");
            return -VAR12;
        }
        VAR10 = FUN7(VAR10);
        FUN4("", VAR9);
        if (VAR4)
        {
            switch (VAR9)
            {
            case VAR14:
                VAR8 = FUN8(VAR2, VAR10);
                if (VAR8 < 0)
                {
                    return VAR8;
                }
                break;
            case VAR15:
                return -VAR12;
            case VAR16:
                return FUN9(VAR2, VAR10);
            default:
                FUN4("", VAR9);
                FUN10(VAR2->VAR5, VAR17, VAR9);
                return -VAR12;
            }
        }
        else
        {
            switch (VAR9)
            {
            case VAR16:
                return FUN9(VAR2, VAR10);
            default:
                FUN4("", VAR9);
                return -VAR12;
            }
        }
    }
}
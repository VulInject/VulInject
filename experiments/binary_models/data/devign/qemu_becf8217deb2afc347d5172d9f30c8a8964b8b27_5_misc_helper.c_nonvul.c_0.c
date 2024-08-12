void FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4)
{
    uint64_t VAR5 = VAR2->VAR6[VAR3];
    uint64_t VAR7 = VAR2->VAR6[VAR4];
    VAR8 *VAR9;
    if (VAR2->VAR10.VAR11 & VAR12)
    {
        FUN2(VAR2, VAR13, VAR14);
        return;
    }
    if ((VAR7 & ~0x0ffffULL) || (VAR7 > 6))
    {
        FUN2(VAR2, VAR15, VAR14);
        return;
    }
    switch (VAR7)
    {
    case 0:
        FUN3(FUN4(VAR2));
        if (FUN5())
        {
            FUN6(FUN7(FUN4(VAR2)));
        }
        break;
    case 1:
        FUN8(FUN4(VAR2));
        if (FUN5())
        {
            FUN6(FUN7(FUN4(VAR2)));
        }
        break;
    case 3:
        FUN9();
        if (FUN5())
        {
            FUN6(FUN7(FUN4(VAR2)));
        }
        break;
    case 5:
        if ((VAR3 & 1) || (VAR5 & 0x0fffULL))
        {
            FUN2(VAR2, VAR15, VAR14);
            return;
        }
        if (!FUN10(&VAR16, VAR5, sizeof(VAR8), false))
        {
            FUN2(VAR2, VAR17, VAR14);
            return;
        }
        VAR9 = FUN11(sizeof(VAR8));
        FUN12(VAR5, VAR9, sizeof(VAR9->VAR18));
        if (!FUN13(VAR9))
        {
            VAR2->VAR6[VAR3 + 1] = VAR19;
            goto VAR20;
        }
        FUN12(VAR5, VAR9, FUN14(VAR9->VAR18));
        if (!FUN15(VAR9) && !FUN16(VAR9))
        {
            VAR2->VAR6[VAR3 + 1] = VAR19;
            goto VAR20;
        }
        FUN17(VAR9);
        VAR2->VAR6[VAR3 + 1] = VAR21;
    VAR20:
        FUN18(VAR9);
        return;
    case 6:
        if ((VAR3 & 1) || (VAR5 & 0x0fffULL))
        {
            FUN2(VAR2, VAR15, VAR14);
            return;
        }
        if (!FUN10(&VAR16, VAR5, sizeof(VAR8), true))
        {
            FUN2(VAR2, VAR17, VAR14);
            return;
        }
        VAR9 = FUN19();
        if (VAR9)
        {
            FUN20(VAR5, VAR9, FUN14(VAR9->VAR18));
            VAR2->VAR6[VAR3 + 1] = VAR21;
        }
        else
        {
            VAR2->VAR6[VAR3 + 1] = VAR22;
        }
        return;
    default:
        FUN21("" VAR23, VAR7);
        break;
    }
}
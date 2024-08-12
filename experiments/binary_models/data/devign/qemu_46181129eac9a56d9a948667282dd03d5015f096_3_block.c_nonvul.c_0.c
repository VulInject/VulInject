static int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10;
    uint64_t VAR11 = VAR3;
    uint64_t VAR12 = VAR4;
    assert(VAR4 & VAR13);
    FUN2(VAR10, &VAR2->VAR14, VAR15)
    {
        if (FUN3(VAR6, VAR10))
        {
            continue;
        }
        if ((VAR3 & VAR10->VAR16) != VAR3)
        {
            char *VAR17 = FUN4(VAR10);
            char *VAR18 = FUN5(VAR3 & ~VAR10->VAR16);
            FUN6(VAR8, ""
                             "",
                       VAR17, VAR10->VAR19, VAR18, FUN7(VAR10->VAR2));
            FUN8(VAR17);
            FUN8(VAR18);
            return -VAR20;
        }
        if ((VAR10->VAR21 & VAR4) != VAR10->VAR21)
        {
            char *VAR17 = FUN4(VAR10);
            char *VAR18 = FUN5(VAR10->VAR21 & ~VAR4);
            FUN6(VAR8, ""
                             "",
                       VAR17, VAR10->VAR19, VAR18, FUN7(VAR10->VAR2));
            FUN8(VAR17);
            FUN8(VAR18);
            return -VAR20;
        }
        VAR11 |= VAR10->VAR21;
        VAR12 &= VAR10->VAR16;
    }
    return FUN9(VAR2, VAR11, VAR12, VAR6, VAR8);
}
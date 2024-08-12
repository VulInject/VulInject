static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    uint32_t VAR6;
    VAR7 *VAR8 = (VAR7 *)VAR4;
    VAR6 = FUN2(VAR8);
    switch (VAR6)
    {
    case VAR9:
        VAR2->VAR10 = VAR11;
        return FUN3(VAR2, (VAR12 *)VAR4);
    case VAR13:
        VAR2->VAR10 = VAR14;
        return 0;
    case VAR15:
        return FUN4(VAR2, (VAR16 *)VAR4, VAR5);
    case VAR17:
        return FUN5(VAR2, (VAR18 *)VAR4, VAR5);
    case VAR19:
        FUN6(VAR2);
        VAR2->VAR20 = 0;
        FUN7(VAR2);
        return FUN8(VAR2, (VAR21 *)VAR4);
    case VAR22:
        return FUN9(VAR2, (VAR23 *)VAR4);
    }
    return VAR24;
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    uint32_t VAR8, VAR9, VAR10;
    int64_t VAR11;
    int VAR12;
    if (VAR2->VAR13->VAR14)
        return VAR15;
    VAR11 = FUN2(VAR2->VAR13);
    VAR8 = FUN3(VAR2->VAR13);
    switch (VAR8)
    {
    case VAR16:
        VAR10 = FUN4(VAR2->VAR13);
        VAR9 = FUN4(VAR2->VAR13);
        VAR12 = FUN5(VAR2->VAR13, VAR4, VAR9);
        VAR4->VAR17 = VAR6->VAR18;
        VAR4->VAR19 = VAR10;
        VAR4->VAR11 = VAR11;
        break;
    case VAR20:
        VAR10 = FUN4(VAR2->VAR13);
        VAR9 = FUN4(VAR2->VAR13);
        VAR12 = FUN5(VAR2->VAR13, VAR4, VAR9);
        VAR4->VAR17 = VAR6->VAR21;
        VAR4->VAR19 = VAR10;
        VAR4->VAR11 = VAR11;
        break;
    case VAR22:
        VAR12 = VAR15;
        break;
    default:
        FUN6(VAR2, VAR23, "", VAR8);
        VAR12 = VAR24;
        break;
    }
    return VAR12;
}
static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *const VAR11 = &VAR8->VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18 = VAR6->VAR19;
    const VAR20 *VAR21 = VAR6->VAR3;
    if (VAR18 < 32)
        return VAR22;
    VAR16 = VAR21[1] & 7;
    VAR17 = VAR21[1] & 0xE0;
    VAR14 = FUN2(&VAR21[14]);
    VAR15 = FUN2(&VAR21[16]);
    VAR8->VAR23 = VAR21[19];
    VAR8->VAR24 = FUN2(&VAR21[20]);
    VAR8->VAR25 = VAR21 + 32;
    VAR8->VAR26 = VAR8->VAR25 + VAR8->VAR24;
    VAR8->VAR27 = VAR18 - VAR8->VAR24 - 32;
    if (VAR8->VAR24 > 512)
        return VAR22;
    if (VAR18 < VAR8->VAR24 + 32)
        return VAR22;
    if (VAR8->VAR23 < 1)
        return VAR22;
    if (VAR17)
    {
        FUN3(VAR2, "", VAR17);
        return VAR28;
    }
    if ((VAR13 = FUN4(VAR14, VAR15, 0, VAR2)) < 0)
        return VAR13;
    if (VAR14 != VAR2->VAR29 || VAR15 != VAR2->VAR30)
        FUN5(VAR2, VAR14, VAR15);
    if (VAR8->VAR27 < FUN6(VAR2->VAR29, 16) * VAR2->VAR30 * VAR8->VAR23 / 8)
        return VAR22;
    if (!VAR16 && VAR8->VAR24 && VAR8->VAR23 <= 8)
    {
        VAR2->VAR31 = VAR32;
    }
    else if (VAR16 == 1 && (VAR8->VAR23 == 6 || VAR8->VAR23 == 8))
    {
        if (VAR8->VAR24 != (1 << (VAR8->VAR23 - 1)))
            return VAR22;
        VAR2->VAR31 = VAR33;
    }
    else
    {
        FUN3(VAR2, "", VAR16, VAR8->VAR23);
        return VAR28;
    }
    if (VAR11->VAR3[0])
        VAR2->FUN7(VAR2, VAR11);
    VAR11->VAR34 = 0;
    if ((VAR13 = VAR2->FUN8(VAR2, VAR11)) < 0)
    {
        FUN9(VAR2, VAR35, "");
        return VAR13;
    }
    VAR11->VAR36 = VAR37;
    if (VAR16)
    {
        FUN10(&VAR8->VAR38, &VAR8->VAR39, VAR15 * VAR14 + VAR40);
        if (!VAR8->VAR38)
            return FUN11(VAR41);
        if (VAR8->VAR23 == 8)
            FUN12(VAR8);
        else
            FUN13(VAR8);
    }
    else
    {
        FUN14(VAR8);
    }
    *VAR4 = sizeof(VAR10);
    *(VAR10 *)VAR3 = VAR8->VAR12;
    return VAR18;
}
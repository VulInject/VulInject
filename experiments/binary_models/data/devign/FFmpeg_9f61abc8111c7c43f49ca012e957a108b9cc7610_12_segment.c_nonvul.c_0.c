static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = VAR6->VAR9;
    VAR10 *VAR11 = VAR2->VAR12[VAR4->VAR13];
    int64_t VAR14 = VAR6->VAR15 * VAR6->VAR16;
    int VAR17, VAR18 = 1;
    if (!VAR8)
        return FUN2(VAR19);
    if (VAR6->VAR20)
    {
        VAR18 = VAR11->VAR21->VAR22 == VAR23 && VAR4->VAR24 & VAR25;
    }
    if (VAR18 && FUN3(VAR4->VAR26, VAR11->VAR27, VAR14, VAR28) >= 0)
    {
        FUN4(VAR2, VAR29, "" VAR30 "", VAR4->VAR13, VAR4->VAR26);
        VAR17 = FUN5(VAR8, VAR6->VAR31);
        if (!VAR17)
            VAR17 = FUN6(VAR2, VAR6->VAR31);
        if (VAR17)
            goto VAR32;
        VAR8 = VAR6->VAR9;
        if (VAR6->VAR33)
        {
            if (VAR6->VAR34 == VAR35)
            {
                if ((VAR17 = FUN7(VAR2, 0)) < 0)
                    goto VAR32;
            }
            else
            {
                FUN8(VAR6->VAR36, "", VAR8->VAR37);
                FUN9(VAR6->VAR36);
                if (VAR6->VAR38 && !(VAR6->VAR16 % VAR6->VAR38))
                {
                    FUN10(VAR2, &VAR6->VAR36);
                    if ((VAR17 = VAR2->FUN11(VAR2, &VAR6->VAR36, VAR6->VAR33, VAR39, NULL)) < 0)
                        goto VAR32;
                }
            }
        }
    }
    VAR17 = FUN12(VAR8, VAR4->VAR13, VAR4, VAR2);
VAR32:
    if (VAR17 < 0)
        FUN13(VAR6);
    return VAR17;
}
void FUN1(VAR1 *VAR2)
{
    abi_ulong VAR3;
    struct VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    abi_ulong VAR10, VAR11, VAR12;
    int VAR13;
    unsigned int VAR14;
    target_sigset_t VAR15;
    sigset_t VAR16;
    VAR3 = VAR2->VAR17[VAR18];
    if (!FUN2(VAR19, VAR5, VAR3, 0))
        goto VAR20;
    VAR9 = &VAR5->VAR21;
    VAR7 = &VAR9->VAR22;
    VAR2->VAR23 = VAR2->VAR24;
    VAR2->VAR24 += 4;
    VAR13 = 0;
    FUN3(0, NULL, &VAR16);
    FUN4(&VAR15, &VAR16);
    if (VAR25 == 1)
    {
        VAR13 |= FUN5(VAR15.VAR26[0], (VAR27 *)&VAR5->VAR28);
    }
    else
    {
        VAR27 *VAR29, *VAR30;
        VAR29 = VAR15.VAR26;
        VAR30 = VAR5->VAR28.VAR26;
        for (VAR14 = 0; VAR14 < VAR25; VAR14++, VAR30++, VAR29++)
        {
            VAR13 |= FUN5(*VAR29, VAR30);
        }
        if (VAR13)
            goto VAR20;
    }
    VAR13 |= FUN5(VAR2->VAR23, &((*VAR7)[VAR31]));
    VAR13 |= FUN5(VAR2->VAR24, &((*VAR7)[VAR32]));
    VAR13 |= FUN5(VAR2->VAR33, &((*VAR7)[VAR34]));
    VAR13 |= FUN5(VAR2->VAR35[1], &((*VAR7)[VAR36]));
    VAR13 |= FUN5(VAR2->VAR35[2], &((*VAR7)[VAR37]));
    VAR13 |= FUN5(VAR2->VAR35[3], &((*VAR7)[VAR38]));
    VAR13 |= FUN5(VAR2->VAR35[4], &((*VAR7)[VAR39]));
    VAR13 |= FUN5(VAR2->VAR35[5], &((*VAR7)[VAR40]));
    VAR13 |= FUN5(VAR2->VAR35[6], &((*VAR7)[VAR41]));
    VAR13 |= FUN5(VAR2->VAR35[7], &((*VAR7)[VAR42]));
    VAR13 |= FUN5(VAR2->VAR17[VAR18], &((*VAR7)[VAR43]));
    VAR13 |= FUN5(VAR2->VAR17[VAR44], &((*VAR7)[VAR45]));
    VAR13 |= FUN5(VAR2->VAR17[VAR46], &((*VAR7)[VAR47]));
    VAR13 |= FUN5(VAR2->VAR17[VAR48], &((*VAR7)[VAR49]));
    VAR13 |= FUN5(VAR2->VAR17[VAR50], &((*VAR7)[VAR51]));
    VAR13 |= FUN5(VAR2->VAR17[VAR52], &((*VAR7)[VAR53]));
    VAR13 |= FUN5(VAR2->VAR17[VAR54], &((*VAR7)[VAR55]));
    VAR13 |= FUN5(VAR2->VAR17[VAR56], &((*VAR7)[VAR57]));
    VAR12 = VAR58 + VAR2->VAR17[VAR54];
    VAR10 = VAR11 = 0;
    if (FUN6(VAR10, VAR12 + FUN7(struct VAR59, VAR60[6]), VAR27) != 0)
        goto VAR20;
    if (FUN6(VAR11, VAR12 + FUN7(struct VAR59, VAR60[7]), VAR27) != 0)
        goto VAR20;
    VAR13 |= FUN5(VAR10, &(VAR9->VAR61));
    VAR13 |= FUN5(VAR11, &(VAR9->VAR62));
    {
        VAR63 *VAR30 = VAR5->VAR21.VAR64.VAR65.VAR66;
        for (VAR14 = 0; VAR14 < 64; VAR14++, VAR30++)
        {
            if (VAR14 & 1)
            {
                VAR13 |= FUN5(VAR2->VAR67[VAR14 / 2].VAR68.VAR69, VAR30);
            }
            else
            {
                VAR13 |= FUN5(VAR2->VAR67[VAR14 / 2].VAR68.VAR70, VAR30);
            }
        }
    }
    VAR13 |= FUN5(VAR2->VAR71, &(VAR9->VAR64.VAR72));
    VAR13 |= FUN5(VAR2->VAR73, &(VAR9->VAR64.VAR74));
    VAR13 |= FUN5(VAR2->VAR75, &(VAR9->VAR64.VAR76));
    if (VAR13)
        goto VAR20;
    FUN8(VAR5, VAR3, 1);
    return;
VAR20:
    FUN8(VAR5, VAR3, 1);
    FUN9(VAR77);
}
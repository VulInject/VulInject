void FUN1(VAR1 *VAR2)
{
    abi_ulong VAR3;
    struct VAR4 *VAR5;
    VAR6 *VAR7;
    abi_ulong VAR8, VAR9, VAR10;
    abi_ulong VAR11, VAR12, VAR13;
    int VAR14;
    unsigned int VAR15;
    VAR3 = VAR2->VAR16[VAR17];
    if (!FUN2(VAR18, VAR5, VAR3, 1))
        goto VAR19;
    VAR7 = &VAR5->VAR20.VAR21;
    VAR14 = FUN3(VAR8, &((*VAR7)[VAR22]));
    VAR14 |= FUN3(VAR9, &((*VAR7)[VAR23]));
    if (VAR14 || ((VAR8 | VAR9) & 3))
        goto VAR19;
    if (VAR2->VAR16[VAR24])
    {
        target_sigset_t VAR25;
        sigset_t VAR26;
        if (VAR27 == 1)
        {
            if (FUN3(VAR25.VAR28[0], &VAR5->VAR29.VAR28[0]))
                goto VAR19;
        }
        else
        {
            VAR30 *VAR31, *VAR32;
            VAR31 = VAR5->VAR29.VAR28;
            VAR32 = VAR25.VAR28;
            for (VAR15 = 0; VAR15 < VAR27; VAR15++, VAR32++, VAR31++)
            {
                VAR14 |= FUN3(*VAR32, VAR31);
            }
            if (VAR14)
                goto VAR19;
        }
        FUN4(&VAR26, &VAR25);
        FUN5(VAR33, &VAR26, NULL);
    }
    VAR2->VAR8 = VAR8;
    VAR2->VAR9 = VAR9;
    VAR14 |= FUN3(VAR2->VAR34, &((*VAR7)[VAR35]));
    VAR14 |= FUN3(VAR10, &((*VAR7)[VAR36]));
    VAR2->VAR37 = (VAR10 >> 24) & 0xff;
    FUN6(VAR2, VAR10 >> 32);
    FUN7(VAR2, VAR10 & 0x1f);
    VAR14 |= FUN3(VAR2->VAR38[1], (&(*VAR7)[VAR39]));
    VAR14 |= FUN3(VAR2->VAR38[2], (&(*VAR7)[VAR40]));
    VAR14 |= FUN3(VAR2->VAR38[3], (&(*VAR7)[VAR41]));
    VAR14 |= FUN3(VAR2->VAR38[4], (&(*VAR7)[VAR42]));
    VAR14 |= FUN3(VAR2->VAR38[5], (&(*VAR7)[VAR43]));
    VAR14 |= FUN3(VAR2->VAR38[6], (&(*VAR7)[VAR44]));
    VAR14 |= FUN3(VAR2->VAR38[7], (&(*VAR7)[VAR45]));
    VAR14 |= FUN3(VAR2->VAR16[VAR17], (&(*VAR7)[VAR46]));
    VAR14 |= FUN3(VAR2->VAR16[VAR24], (&(*VAR7)[VAR47]));
    VAR14 |= FUN3(VAR2->VAR16[VAR48], (&(*VAR7)[VAR49]));
    VAR14 |= FUN3(VAR2->VAR16[VAR50], (&(*VAR7)[VAR51]));
    VAR14 |= FUN3(VAR2->VAR16[VAR52], (&(*VAR7)[VAR53]));
    VAR14 |= FUN3(VAR2->VAR16[VAR54], (&(*VAR7)[VAR55]));
    VAR14 |= FUN3(VAR2->VAR16[VAR56], (&(*VAR7)[VAR57]));
    VAR14 |= FUN3(VAR2->VAR16[VAR58], (&(*VAR7)[VAR59]));
    VAR14 |= FUN3(VAR11, &(VAR5->VAR20.VAR60));
    VAR14 |= FUN3(VAR12, &(VAR5->VAR20.VAR61));
    VAR13 = VAR62 + VAR2->VAR16[VAR56];
    if (FUN8(VAR11, VAR13 + FUN9(struct VAR63, VAR64[6]), VAR30) != 0)
        goto VAR19;
    if (FUN8(VAR12, VAR13 + FUN9(struct VAR63, VAR64[7]), VAR30) != 0)
        goto VAR19;
    VAR14 |= FUN3(VAR2->VAR65, &(VAR5->VAR20.VAR66.VAR67));
    {
        VAR68 *VAR31 = VAR5->VAR20.VAR66.VAR69.VAR70;
        for (VAR15 = 0; VAR15 < 64; VAR15++, VAR31++)
        {
            if (VAR15 & 1)
            {
                VAR14 |= FUN3(VAR2->VAR71[VAR15 / 2].VAR72.VAR73, VAR31);
            }
            else
            {
                VAR14 |= FUN3(VAR2->VAR71[VAR15 / 2].VAR72.VAR74, VAR31);
            }
        }
    }
    VAR14 |= FUN3(VAR2->VAR75, &(VAR5->VAR20.VAR66.VAR76));
    VAR14 |= FUN3(VAR2->VAR77, &(VAR5->VAR20.VAR66.VAR78));
    if (VAR14)
        goto VAR19;
    FUN10(VAR5, VAR3, 0);
    return;
VAR19:
    FUN10(VAR5, VAR3, 0);
    FUN11(VAR79);
}
int FUN1(VAR1 *VAR2, VAR3 *VAR4, mfxSession VAR5)
{
    mfxVideoParam VAR6 = {{0}};
    int VAR7;
    VAR4->VAR8 = FUN2((1 + VAR4->VAR9) * (sizeof(VAR10) + sizeof(VAR11 *)));
    if (!VAR4->VAR8)
        return FUN3(VAR12);
    VAR7 = FUN4(VAR2, VAR4, VAR5);
    if (VAR7 < 0)
    {
        FUN5(VAR2, VAR13, "");
        return VAR7;
    }
    VAR7 = FUN6(VAR2->VAR14);
    if (VAR7 < 0)
        return VAR7;
    VAR6.VAR15.VAR16 = VAR7;
    VAR6.VAR15.VAR17 = VAR2->VAR18;
    VAR6.VAR15.VAR19 = VAR2->VAR20;
    VAR6.VAR15.VAR21.VAR22 = 8;
    VAR6.VAR15.VAR21.VAR23 = 8;
    VAR6.VAR15.VAR21.VAR24 = 0;
    VAR6.VAR15.VAR21.VAR25 = VAR26;
    VAR6.VAR15.VAR21.VAR27 = VAR2->VAR28;
    VAR6.VAR15.VAR21.VAR29 = VAR2->VAR30;
    VAR6.VAR15.VAR21.VAR31 = VAR32;
    VAR6.VAR33 = VAR4->VAR34;
    VAR6.VAR35 = VAR4->VAR9;
    VAR6.VAR36 = VAR4->VAR37;
    VAR6.VAR38 = VAR4->VAR39;
    VAR7 = FUN7(VAR4->VAR5, &VAR6);
    if (VAR7 < 0)
    {
        FUN5(VAR2, VAR13, "");
        return FUN8(VAR7);
    }
    return 0;
}
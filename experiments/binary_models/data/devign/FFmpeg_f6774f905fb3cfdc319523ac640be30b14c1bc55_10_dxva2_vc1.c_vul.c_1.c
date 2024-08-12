static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4, const struct VAR5 *VAR6, VAR7 *VAR8)
{
    const VAR9 *VAR10 = VAR6->VAR11;
    int VAR12 = VAR6->VAR13 != VAR14;
    memset(VAR8, 0, sizeof(*VAR8));
    VAR8->VAR15 = FUN2(VAR4, &VAR10->VAR16);
    VAR8->VAR17 = 0;
    if (VAR6->VAR18 != VAR19)
        VAR8->VAR20 = FUN2(VAR4, &VAR6->VAR21.VAR16);
    else
        VAR8->VAR20 = 0xffff;
    if (VAR6->VAR18 == VAR22)
        VAR8->VAR23 = FUN2(VAR4, &VAR6->VAR24.VAR16);
    else
        VAR8->VAR23 = 0xffff;
    VAR8->VAR25 = VAR6->VAR26 - 1;
    VAR8->VAR27 = (VAR6->VAR28 >> VAR12) - 1;
    VAR8->VAR29 = 15;
    VAR8->VAR30 = 15;
    VAR8->VAR31 = 7;
    VAR8->VAR32 = 7;
    VAR8->VAR33 = 7;
    VAR8->VAR34 = VAR6->VAR13;
    VAR8->VAR35 = VAR12 && !VAR6->VAR36;
    VAR8->VAR37 = VAR6->VAR18 == VAR19;
    VAR8->VAR38 = VAR6->VAR18 == VAR22;
    VAR8->VAR39 = 0;
    VAR8->VAR40 = 0;
    VAR8->VAR41 = VAR6->VAR42;
    VAR8->VAR43 = 1;
    VAR8->VAR44 = VAR6->VAR45 ? 1 : 0;
    VAR8->VAR46 = 0;
    VAR8->VAR47 = 0;
    VAR8->VAR48 = 0;
    VAR8->VAR49 = 0;
    VAR8->VAR50 = 0;
    VAR8->VAR51 = 0;
    VAR8->VAR52 = 0;
    VAR8->VAR53 = 0;
    VAR8->VAR54 = 0;
    VAR8->VAR55 = 0;
    VAR8->VAR56 = 0;
    VAR8->VAR57 = 0;
    VAR8->VAR58 = (VAR6->VAR59[0][0] << 12) | (VAR6->VAR59[0][1] << 8) | (VAR6->VAR59[1][0] << 4) | (VAR6->VAR59[1][1]);
    VAR8->VAR60 = (VAR6->VAR61 << 14) | (VAR6->VAR13 << 12) | (VAR6->VAR62 << 11) | (VAR6->VAR63 << 10) | (VAR6->VAR64 << 9) | (VAR6->VAR65 << 8) | (VAR6->VAR66 << 7) | (VAR6->VAR45 << 6) | (VAR6->VAR67 << 5) | (VAR6->VAR68 << 4) | (VAR6->VAR69 << 3);
    VAR8->VAR70 = 0;
    VAR8->VAR71 = 0;
}
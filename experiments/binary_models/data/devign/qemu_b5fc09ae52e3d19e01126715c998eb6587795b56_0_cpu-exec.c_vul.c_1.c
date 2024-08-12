static inline VAR1 *FUN1(void)
{
    VAR1 *VAR2;
    target_ulong VAR3, VAR4;
    uint64_t VAR5;
    VAR5 = VAR6->VAR7;
    VAR5 |= (VAR6->VAR8 & (VAR9 | VAR10 | VAR11));
    VAR5 |= VAR6->VAR12;
    VAR3 = VAR6->VAR13[VAR14].VAR15;
    VAR4 = VAR3 + VAR6->VAR16;
    VAR5 = VAR6->VAR17 | (VAR6->VAR18.VAR19 << 1) | (VAR6->VAR18.VAR20 << 4);
    if ((VAR6->VAR21 & VAR22) != VAR23)
        VAR5 |= (1 << 6);
    if (VAR6->VAR18.VAR24[VAR25] & (1 << 30))
        VAR5 |= (1 << 7);
    VAR5 |= (VAR6->VAR26 << 8);
    VAR3 = 0;
    VAR4 = VAR6->VAR27[15];
    VAR5 = (((VAR6->VAR28 & VAR29) >> 1) | ((VAR6->VAR30 & VAR31) << 2)) | (VAR6->VAR28 & VAR32) | ((VAR6->VAR33 & (VAR34 | VAR35)) >> 2);
    VAR5 = (VAR6->VAR36 << 4) | VAR6->VAR37;
    VAR3 = VAR6->VAR38;
    VAR4 = VAR6->VAR4;
    VAR5 = VAR6->VAR7;
    VAR3 = 0;
    VAR4 = VAR6->VAR39;
    VAR5 = VAR6->VAR7 & (VAR40 | VAR41);
    VAR3 = 0;
    VAR4 = VAR6->VAR42[VAR6->VAR43];
    VAR5 = (VAR6->VAR44 & VAR45) | (VAR6->VAR46 & VAR47) | ((VAR6->VAR48 >> 4) & 0xf);
    VAR3 = 0;
    VAR4 = VAR6->VAR4;
    VAR5 = VAR6->VAR5;
    VAR3 = 0;
    VAR4 = VAR6->VAR4;
    VAR5 = VAR6->VAR49;
    VAR3 = 0;
    VAR4 = VAR6->VAR4;
    VAR5 = VAR6->VAR50[VAR51] & (VAR52 | VAR53);
    VAR3 = 0;
    VAR4 = VAR6->VAR4;
    VAR2 = VAR6->VAR54[FUN2(VAR4)];
    if (FUN3(!VAR2 || VAR2->VAR4 != VAR4 || VAR2->VAR3 != VAR3 || VAR2->VAR5 != VAR5, 0))
    {
        VAR2 = FUN4(VAR4, VAR3, VAR5);
        if (VAR55)
        {
            VAR56 = 0;
        }
    }
    return VAR2;
}
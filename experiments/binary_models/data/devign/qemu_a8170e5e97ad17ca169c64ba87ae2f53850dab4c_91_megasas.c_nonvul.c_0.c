static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5, VAR6;
    hwaddr VAR7, VAR8;
    struct VAR9 *VAR10;
    uint32_t VAR11;
    int VAR12 = VAR13;
    VAR6 = FUN2(VAR4->VAR14->VAR15.VAR16);
    VAR5 = FUN2(VAR4->VAR14->VAR15.VAR17);
    VAR7 = (((VAR18)VAR5 << 32) | VAR6);
    FUN3((VAR18)VAR7);
    VAR8 = sizeof(*VAR10);
    VAR10 = FUN4(VAR7, &VAR8, 0);
    if (!VAR10 || VAR8 != sizeof(*VAR10))
    {
        FUN5(VAR4->VAR19);
        VAR2->VAR20++;
        VAR12 = VAR21;
        goto VAR22;
    }
    VAR2->VAR23 = FUN2(VAR10->VAR24) & 0xFFFF;
    if (VAR2->VAR23 > VAR2->VAR25)
    {
        FUN6(VAR2->VAR23, VAR2->VAR25);
        VAR2->VAR20++;
        VAR12 = VAR26;
        goto VAR22;
    }
    VAR6 = FUN2(VAR10->VAR27);
    VAR5 = FUN2(VAR10->VAR28);
    VAR2->VAR29 = ((VAR18)VAR5 << 32) | VAR6;
    VAR6 = FUN2(VAR10->VAR30);
    VAR5 = FUN2(VAR10->VAR31);
    VAR2->VAR32 = ((VAR18)VAR5 << 32) | VAR6;
    VAR6 = FUN2(VAR10->VAR33);
    VAR5 = FUN2(VAR10->VAR34);
    VAR2->VAR35 = ((VAR18)VAR5 << 32) | VAR6;
    VAR2->VAR36 = FUN7(VAR2->VAR35);
    VAR2->VAR37 = FUN7(VAR2->VAR32);
    VAR11 = FUN2(VAR10->VAR11);
    if (VAR11 & VAR38)
    {
        VAR2->VAR11 |= VAR39;
    }
    FUN8((unsigned long)VAR2->VAR29, VAR2->VAR23, VAR2->VAR36, VAR2->VAR37, VAR11);
    FUN9(VAR2);
    VAR2->VAR40 = VAR41;
VAR22:
    if (VAR10)
    {
        FUN10(VAR10, VAR8, 0, 0);
    }
    return VAR12;
}
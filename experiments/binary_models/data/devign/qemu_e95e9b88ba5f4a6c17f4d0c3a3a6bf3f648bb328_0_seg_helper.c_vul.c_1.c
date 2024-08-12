static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, target_ulong VAR6, int VAR7)
{
    VAR8 *VAR9;
    target_ulong VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    int VAR16, VAR17;
    uint32_t VAR18, VAR19, VAR20, VAR21;
    target_ulong VAR22, VAR23, VAR24;
    VAR16 = 0;
    if (!VAR4 && !VAR7)
    {
        VAR16 = FUN2(VAR3);
    }
    if (VAR4)
    {
        VAR22 = VAR6;
    }
    else
    {
        VAR22 = VAR2->VAR25;
    }
    VAR9 = &VAR2->VAR26;
    if (VAR3 * 16 + 15 > VAR9->VAR27)
    {
        FUN3(VAR2, VAR28, VAR3 * 16 + 2);
    }
    VAR10 = VAR9->VAR29 + VAR3 * 16;
    VAR18 = FUN4(VAR2, VAR10);
    VAR19 = FUN4(VAR2, VAR10 + 4);
    VAR20 = FUN4(VAR2, VAR10 + 8);
    VAR11 = (VAR19 >> VAR30) & 0x1f;
    switch (VAR11)
    {
    case 14:
    case 15:
        break;
    default:
        FUN3(VAR2, VAR28, VAR3 * 16 + 2);
        break;
    }
    VAR12 = (VAR19 >> VAR31) & 3;
    VAR14 = VAR2->VAR32 & VAR33;
    if (VAR4 && VAR12 < VAR14)
    {
        FUN3(VAR2, VAR28, VAR3 * 16 + 2);
    }
    if (!(VAR19 & VAR34))
    {
        FUN3(VAR2, VAR35, VAR3 * 16 + 2);
    }
    VAR13 = VAR18 >> 16;
    VAR24 = ((VAR36)VAR20 << 32) | (VAR19 & 0xffff0000) | (VAR18 & 0x0000ffff);
    VAR15 = VAR19 & 7;
    if ((VAR13 & 0xfffc) == 0)
    {
        FUN3(VAR2, VAR28, 0);
    }
    if (FUN5(VAR2, &VAR18, &VAR19, VAR13) != 0)
    {
        FUN3(VAR2, VAR28, VAR13 & 0xfffc);
    }
    if (!(VAR19 & VAR37) || !(VAR19 & (VAR38)))
    {
        FUN3(VAR2, VAR28, VAR13 & 0xfffc);
    }
    VAR12 = (VAR19 >> VAR31) & 3;
    if (VAR12 > VAR14)
    {
        FUN3(VAR2, VAR28, VAR13 & 0xfffc);
    }
    if (!(VAR19 & VAR34))
    {
        FUN3(VAR2, VAR35, VAR13 & 0xfffc);
    }
    if (!(VAR19 & VAR39) || (VAR19 & VAR40))
    {
        FUN3(VAR2, VAR28, VAR13 & 0xfffc);
    }
    if ((!(VAR19 & VAR41) && VAR12 < VAR14) || VAR15 != 0)
    {
        VAR17 = 1;
        VAR23 = FUN6(VAR2, VAR15 != 0 ? VAR15 + 3 : VAR12);
        VAR21 = 0;
    }
    else if ((VAR19 & VAR41) || VAR12 == VAR14)
    {
        if (VAR2->VAR42 & VAR43)
        {
            FUN3(VAR2, VAR28, VAR13 & 0xfffc);
        }
        VAR17 = 0;
        VAR23 = VAR2->VAR44[VAR45];
        VAR12 = VAR14;
    }
    else
    {
        FUN3(VAR2, VAR28, VAR13 & 0xfffc);
        VAR17 = 0;
        VAR23 = 0;
    }
    VAR23 &= ~0xfLL;
    FUN7(VAR23, VAR2->VAR46[VAR47].VAR13);
    FUN7(VAR23, VAR2->VAR44[VAR45]);
    FUN7(VAR23, FUN8(VAR2));
    FUN7(VAR23, VAR2->VAR46[VAR48].VAR13);
    FUN7(VAR23, VAR22);
    if (VAR16)
    {
        FUN7(VAR23, VAR5);
    }
    if ((VAR11 & 1) == 0)
    {
        VAR2->VAR42 &= ~VAR49;
    }
    VAR2->VAR42 &= ~(VAR50 | VAR43 | VAR51 | VAR52);
    if (VAR17)
    {
        VAR21 = 0 | VAR12;
        FUN9(VAR2, VAR47, VAR21, 0, 0, 0);
    }
    VAR2->VAR44[VAR45] = VAR23;
    VAR13 = (VAR13 & ~3) | VAR12;
    FUN9(VAR2, VAR48, VAR13, FUN10(VAR18, VAR19), FUN11(VAR18, VAR19), VAR19);
    VAR2->VAR25 = VAR24;
}
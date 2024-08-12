static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR7.VAR6;
    VAR8 *VAR9 = VAR6->VAR1;
    int VAR10;
    const VAR11 *VAR12;
    int VAR13;
    VAR4->VAR14 = NULL;
    if (VAR2 >= 0)
    {
        VAR2 = FUN2(VAR6, VAR4->VAR15, &VAR4->VAR16);
    }
    FUN3(&VAR4->VAR16);
    if (VAR2 < 0)
        goto VAR17;
    VAR4->VAR18 -= VAR4->VAR19;
    VAR4->VAR20 += VAR4->VAR19;
    VAR4->VAR21 += VAR4->VAR19 * 512;
    if (VAR4->VAR18 == 0)
    {
        VAR2 = 0;
        goto VAR17;
    }
    VAR10 = VAR4->VAR20 & (VAR9->VAR22 - 1);
    VAR13 = VAR10 + VAR4->VAR18;
    if (VAR9->VAR23 && VAR13 > VAR24 * VAR9->VAR22)
        VAR13 = VAR24 * VAR9->VAR22;
    VAR4->VAR15 = FUN4(VAR6, VAR4->VAR20 << 9, VAR10, VAR13, &VAR4->VAR19, &VAR4->VAR16);
    if (!VAR4->VAR15 && VAR4->VAR16.VAR25 != NULL)
    {
        FUN5(&VAR4->VAR16.VAR25->VAR26, VAR4, VAR27);
        return;
    }
    if (!VAR4->VAR15 || (VAR4->VAR15 & 511) != 0)
    {
        VAR2 = -VAR28;
        goto VAR17;
    }
    if (VAR9->VAR23)
    {
        if (!VAR4->VAR29)
        {
            VAR4->VAR29 = FUN6(VAR24 * VAR9->VAR30);
        }
        FUN7(VAR9, VAR4->VAR20, VAR4->VAR29, VAR4->VAR21, VAR4->VAR19, 1, &VAR9->VAR31);
        VAR12 = VAR4->VAR29;
    }
    else
    {
        VAR12 = VAR4->VAR21;
    }
    VAR4->VAR32.VAR33 = (void *)VAR12;
    VAR4->VAR32.VAR34 = VAR4->VAR19 * 512;
    FUN8(&VAR4->VAR35, &VAR4->VAR32, 1);
    VAR4->VAR14 = FUN9(VAR9->VAR36, (VAR4->VAR15 >> 9) + VAR10, &VAR4->VAR35, VAR4->VAR19, VAR37, VAR4);
    if (VAR4->VAR14 == NULL)
        goto VAR17;
    return;
VAR17:
    if (VAR4->VAR38->VAR39 > 1)
        FUN10(VAR4->VAR40);
    VAR4->VAR7.FUN11(VAR4->VAR7.VAR1, VAR2);
    FUN12(VAR4);
}
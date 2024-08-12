static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR7.VAR6;
    VAR8 *VAR9 = VAR6->VAR1;
    int VAR10;
    uint64_t VAR11;
    const VAR12 *VAR13;
    int VAR14;
    VAR4->VAR15 = NULL;
    if (VAR2 < 0)
    {
    VAR16:
        VAR4->VAR7.FUN2(VAR4->VAR7.VAR1, VAR2);
        FUN3(VAR4);
        return;
    }
    VAR4->VAR17 -= VAR4->VAR18;
    VAR4->VAR19 += VAR4->VAR18;
    VAR4->VAR20 += VAR4->VAR18 * 512;
    if (VAR4->VAR17 == 0)
    {
        VAR4->VAR7.FUN2(VAR4->VAR7.VAR1, 0);
        FUN3(VAR4);
        return;
    }
    VAR10 = VAR4->VAR19 & (VAR9->VAR21 - 1);
    VAR14 = VAR10 + VAR4->VAR17;
    if (VAR9->VAR22 && VAR14 > VAR23 * VAR9->VAR21)
        VAR14 = VAR23 * VAR9->VAR21;
    VAR11 = FUN4(VAR6, VAR4->VAR19 << 9, VAR10, VAR14, &VAR4->VAR18);
    if (!VAR11 || (VAR11 & 511) != 0)
    {
        VAR2 = -VAR24;
        goto VAR16;
    }
    if (VAR9->VAR22)
    {
        if (!VAR4->VAR25)
        {
            VAR4->VAR25 = FUN5(VAR23 * VAR9->VAR26);
            if (!VAR4->VAR25)
            {
                VAR2 = -VAR27;
                goto VAR16;
            }
        }
        FUN6(VAR9, VAR4->VAR19, VAR4->VAR25, VAR4->VAR20, VAR4->VAR18, 1, &VAR9->VAR28);
        VAR13 = VAR4->VAR25;
    }
    else
    {
        VAR13 = VAR4->VAR20;
    }
    VAR4->VAR15 = FUN7(VAR9->VAR29, (VAR11 >> 9) + VAR10, VAR13, VAR4->VAR18, VAR30, VAR4);
    if (VAR4->VAR15 == NULL)
        goto VAR16;
}
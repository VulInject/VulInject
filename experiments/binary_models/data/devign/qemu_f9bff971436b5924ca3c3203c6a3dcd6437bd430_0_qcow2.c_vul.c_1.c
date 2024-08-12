static int FUN1(VAR1 *VAR2, int64_t VAR3, const VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    z_stream VAR10;
    int VAR11, VAR12;
    VAR4 *VAR13;
    uint64_t VAR14;
    if (VAR6 == 0)
    {
        VAR14 = FUN2(VAR2->VAR15);
        VAR14 = (VAR14 + 511) & ~511;
        FUN3(VAR2->VAR15, VAR14);
        return 0;
    }
    if (VAR6 != VAR8->VAR16)
    {
        VAR11 = -VAR17;
        if (VAR3 + VAR6 == VAR2->VAR18 && VAR6 < VAR8->VAR16)
        {
            VAR4 *VAR19 = FUN4(VAR2, VAR8->VAR20);
            memset(VAR19, 0, VAR8->VAR20);
            memcpy(VAR19, VAR5, VAR6 * VAR21);
            VAR11 = FUN1(VAR2, VAR3, VAR19, VAR8->VAR16);
            FUN5(VAR19);
        }
        return VAR11;
    }
    VAR13 = FUN6(VAR8->VAR20 + (VAR8->VAR20 / 1000) + 128);
    memset(&VAR10, 0, sizeof(VAR10));
    VAR11 = FUN7(&VAR10, VAR22, VAR23, -12, 9, VAR24);
    if (VAR11 != 0)
    {
        VAR11 = -VAR17;
        goto VAR25;
    }
    VAR10.VAR26 = VAR8->VAR20;
    VAR10.VAR27 = (VAR4 *)VAR5;
    VAR10.VAR28 = VAR8->VAR20;
    VAR10.VAR29 = VAR13;
    VAR11 = FUN8(&VAR10, VAR30);
    if (VAR11 != VAR31 && VAR11 != VAR32)
    {
        FUN9(&VAR10);
        VAR11 = -VAR17;
        goto VAR25;
    }
    VAR12 = VAR10.VAR29 - VAR13;
    FUN9(&VAR10);
    if (VAR11 != VAR31 || VAR12 >= VAR8->VAR20)
    {
        VAR11 = FUN10(VAR2, VAR33, VAR3 * VAR21, VAR8->VAR16 * VAR21);
        if (VAR11 < 0)
        {
            goto VAR25;
        }
        VAR11 = FUN11(VAR2, VAR3, VAR5, VAR8->VAR16);
        if (VAR11 < 0)
        {
            goto VAR25;
        }
    }
    else
    {
        VAR14 = FUN12(VAR2, VAR3 << 9, VAR12);
        if (!VAR14)
        {
            VAR11 = -VAR34;
            goto VAR25;
        }
        VAR14 &= VAR8->VAR35;
        VAR11 = FUN10(VAR2, VAR33, VAR14, VAR12);
        if (VAR11 < 0)
        {
            goto VAR25;
        }
        FUN13(VAR2->VAR15, VAR36);
        VAR11 = FUN14(VAR2->VAR15, VAR14, VAR13, VAR12);
        if (VAR11 < 0)
        {
            goto VAR25;
        }
    }
    VAR11 = 0;
VAR25:
    FUN15(VAR13);
    return VAR11;
}
static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *const VAR8 = VAR2->VAR9;
    GetBitContext VAR10;
    int VAR11, VAR12, VAR13;
    int VAR14 = VAR6->VAR15 << 3;
    if (VAR8->VAR16 > '')
    {
        if (VAR8->VAR17->VAR3[0])
            VAR2->FUN2(VAR2, VAR8->VAR17);
        if ((VAR13 = FUN3(VAR2, VAR8->VAR17)) < 0)
        {
            FUN4(VAR2, VAR18, "");
            return VAR13;
        }
    }
    else
    {
        if ((VAR13 = VAR2->FUN5(VAR2, VAR8->VAR17)) < 0)
        {
            FUN4(VAR2, VAR18, "");
            return VAR13;
        }
    }
    FUN6(&VAR10, VAR6->VAR3, VAR14);
    if (VAR8->VAR19)
    {
        if (VAR8->VAR16 >= '')
            FUN7(&VAR10, 32);
        if ((VAR13 = FUN8(VAR8, &VAR10, 3, 0)) < 0)
            return VAR13;
    }
    if (VAR8->VAR16 >= '')
        FUN7(&VAR10, 32);
    for (VAR11 = 0; VAR11 < 3; VAR11++)
    {
        VAR12 = (!VAR11 || !VAR8->VAR20) ? VAR11 : (VAR11 ^ 3);
        if (VAR8->VAR16 > '')
        {
            if ((VAR13 = FUN8(VAR8, &VAR10, VAR12, !!VAR11)) < 0)
                return VAR13;
        }
        else
        {
            if ((VAR13 = FUN9(VAR8, &VAR10, VAR12, !VAR2->VAR21, !!VAR11)) < 0)
                return VAR13;
        }
        if (FUN10(&VAR10) >= VAR14)
            break;
    }
    FUN11();
    *VAR4 = 1;
    *(VAR22 *)VAR3 = *VAR8->VAR17;
    if (VAR8->VAR16 > '')
        FUN12(VAR22 *, VAR8->VAR17, VAR8->VAR23);
    return VAR6->VAR15;
}
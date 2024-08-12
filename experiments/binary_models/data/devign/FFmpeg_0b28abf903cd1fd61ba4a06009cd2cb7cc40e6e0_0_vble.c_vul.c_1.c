static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    GetBitContext VAR13;
    const VAR14 *VAR15 = VAR6->VAR3;
    int VAR16;
    int VAR17 = 0;
    int VAR18 = VAR2->VAR19 / 2, VAR20 = VAR2->VAR21 / 2;
    VAR11->VAR22 = 0;
    if (VAR11->VAR3[0])
        VAR2->FUN2(VAR2, VAR11);
    if (VAR2->FUN3(VAR2, VAR11) < 0)
    {
        FUN4(VAR2, VAR23, "");
        return FUN5(VAR24);
        VAR11->VAR25 = 1;
        VAR11->VAR26 = VAR27;
        VAR16 = FUN6(VAR15);
        if (VAR16 != 1)
            FUN4(VAR2, VAR28, "", VAR16);
        FUN7(&VAR13, VAR15 + 4, (VAR6->VAR29 - 4) * 8);
        if (FUN8(VAR8, &VAR13) < 0)
        {
            FUN4(VAR2, VAR23, "");
            FUN9(VAR8, &VAR13, 0, VAR17, VAR2->VAR19, VAR2->VAR21);
            if (!(VAR8->VAR2->VAR30 & VAR31))
            {
                VAR17 += VAR2->VAR19 * VAR2->VAR21;
                FUN9(VAR8, &VAR13, 1, VAR17, VAR18, VAR20);
                VAR17 += VAR18 * VAR20;
                FUN9(VAR8, &VAR13, 2, VAR17, VAR18, VAR20);
                *VAR4 = sizeof(VAR10);
                *(VAR10 *)VAR3 = *VAR11;
                return VAR6->VAR29
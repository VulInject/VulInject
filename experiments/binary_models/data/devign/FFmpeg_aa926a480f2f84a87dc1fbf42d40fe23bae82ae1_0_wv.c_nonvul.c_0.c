static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11;
    VAR8->VAR12 = 0;
    if (FUN2(VAR2, VAR6) < 0)
        return -1;
    VAR11 = FUN3(VAR2, 0);
    if (!VAR11)
        return -1;
    VAR11->VAR13->VAR14 = VAR15;
    VAR11->VAR13->VAR16 = VAR17;
    VAR11->VAR13->VAR18 = VAR8->VAR19;
    VAR11->VAR13->VAR20 = VAR8->VAR21;
    VAR11->VAR13->VAR22 = VAR8->VAR23;
    FUN4(VAR11, 64, 1, VAR8->VAR21);
    VAR2->VAR24 = 0;
    VAR2->VAR25 = (VAR26)VAR8->VAR27 * VAR28 / VAR11->VAR13->VAR20;
    if (!FUN5(VAR2->VAR6))
    {
        int64_t VAR29 = FUN6(VAR2->VAR6);
        FUN7(VAR2);
        if (!FUN8(VAR2->VAR30, "", NULL, VAR31))
            FUN9(VAR2);
        FUN10(VAR2->VAR6, VAR29, VAR32);
    }
    return 0;
}
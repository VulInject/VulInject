void FUN1(VAR1 *VAR2)
{
    int64_t VAR3;
    int VAR4;
    VAR2->VAR5 = VAR6 | VAR7;
    VAR2->VAR8 = 0;
    VAR3 = FUN2(VAR2);
    VAR4 = VAR2->VAR9;
    if (VAR4 == 0)
    {
        FUN3(VAR2);
        return;
    }
    VAR2->VAR5 |= VAR10;
    if (VAR4 > VAR2->VAR11)
    {
        VAR4 = VAR2->VAR11;
    }
    FUN4("" VAR12 "", VAR3);
    VAR2->VAR13.VAR14 = VAR2->VAR15;
    VAR2->VAR13.VAR16 = VAR4 * VAR17;
    FUN5(&VAR2->VAR18, &VAR2->VAR13, 1);
    FUN6(VAR2->VAR19, &VAR2->VAR20, VAR4 * VAR17, VAR21);
    VAR2->VAR22 = FUN7(VAR2->VAR19, VAR3, &VAR2->VAR18, VAR4, VAR23, VAR2);
}
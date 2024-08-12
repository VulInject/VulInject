static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4)
{
    VAR1 *VAR5;
    VAR5 = FUN2(sizeof(VAR1));
    if (!VAR5)
        return NULL;
    FUN3(VAR5->VAR2, VAR2, sizeof(VAR5->VAR2));
    VAR5->VAR4 = VAR4;
    VAR5->VAR6 = 0;
    VAR5->VAR7 = 0;
    VAR5->VAR8 = FUN4();
    VAR5->VAR9 = FUN5();
    VAR5->VAR10 = FUN4();
    VAR5->VAR11 = FUN5();
    FUN6(&VAR5->VAR12);
    FUN6(&VAR5->VAR13);
    FUN6(&VAR5->VAR14);
    VAR5->VAR15 = FUN5();
    FUN7(VAR5, VAR16);
    FUN8(VAR5, 1.0);
    VAR5->VAR17 = -FUN9() / 1000000.0;
    VAR5->VAR18 = VAR5->VAR17;
    VAR5->VAR19 = -1;
    VAR5->VAR20 = -1;
    VAR5->VAR21 = VAR21;
    VAR5->VAR22 = FUN10(VAR23, VAR5);
    if (!VAR5->VAR22)
    {
        FUN11(VAR5);
        return NULL;
    }
    return VAR5;
}
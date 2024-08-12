int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, VAR5 **VAR6)
{
    int VAR7, VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    int VAR16;
    int VAR17;
    assert(VAR2->VAR18);
    VAR8 = FUN2(VAR2, VAR3, VAR4);
    if (VAR8 < 0)
    {
        FUN3(VAR6, "");
        return -VAR19;
    }
    VAR13 = &VAR10->VAR20[VAR8];
    if (VAR13->VAR21 > VAR22)
    {
        FUN3(VAR6, "");
        return -VAR23;
    }
    VAR16 = VAR13->VAR21 * sizeof(VAR14);
    VAR15 = FUN4(FUN5(VAR16, 512));
    VAR17 = FUN6(VAR2->VAR24, VAR13->VAR25, VAR15, VAR16);
    if (VAR17 < 0)
    {
        FUN3(VAR6, "");
        FUN7(VAR15);
        return VAR17;
    }
    FUN7(VAR10->VAR26);
    VAR10->VAR21 = VAR13->VAR21;
    VAR10->VAR25 = VAR13->VAR25;
    VAR10->VAR26 = VAR15;
    for (VAR7 = 0; VAR7 < VAR10->VAR21; VAR7++)
    {
        FUN8(&VAR10->VAR26[VAR7]);
    }
    return 0;
}
int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12[VAR4];
    VAR10 *VAR13 = NULL, *VAR14 = NULL;
    VAR15 *VAR16 = VAR8->VAR16;
    int VAR17, VAR18 = VAR8->VAR18;
    int VAR19;
    VAR11->VAR20 = VAR5;
    for (VAR17 = VAR4; VAR17 < VAR8->VAR21; VAR17 += VAR18)
    {
        VAR11->VAR22 = VAR17 << 16;
        VAR19 = VAR8->FUN2(VAR2, VAR3, VAR4, VAR5);
        if (VAR19 < 0)
            return VAR19;
        if (VAR8->VAR23)
            VAR8->FUN3(VAR2, VAR3, VAR4, VAR5);
        FUN4(VAR11, VAR17, VAR24 & 0xFFFF);
        VAR8->VAR25.VAR26 -= 64;
        VAR8->VAR27.VAR26 -= 64;
        if (VAR2->VAR28 == VAR29)
            FUN5(&VAR16->VAR30, VAR17, 0);
    }
    return 0;
}
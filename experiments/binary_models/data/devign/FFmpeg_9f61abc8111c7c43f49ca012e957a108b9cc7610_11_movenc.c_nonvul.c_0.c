static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0, VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    int64_t VAR8, VAR9 = FUN2(VAR2->VAR10);
    VAR11 *VAR12, *VAR13[2];
    int VAR14 = 0;
    int VAR15[2];
    VAR16 *VAR17;
    if (VAR6->VAR18 & VAR19)
        VAR4 = FUN3(VAR2);
    else
        VAR4 = FUN4(VAR2);
    if (VAR4 < 0)
        return VAR4;
    VAR12 = FUN5(VAR4 * 2);
    if (!VAR12)
        return FUN6(VAR20);
    VAR13[0] = VAR12;
    VAR13[1] = VAR12 + VAR4;
    FUN7(VAR2->VAR10);
    VAR3 = VAR2->FUN8(VAR2, &VAR17, VAR2->VAR21, VAR22, NULL);
    if (VAR3 < 0)
    {
        FUN9(VAR2, VAR23, ""
                                "",
               VAR2->VAR21);
        goto VAR24;
    }
    VAR9 = FUN2(VAR2->VAR10);
    FUN10(VAR2->VAR10, VAR6->VAR25 + VAR4, VAR26);
    FUN10(VAR17, VAR6->VAR25, VAR26);
    VAR8 = FUN2(VAR17);
    VAR15[VAR14] = FUN11(VAR17, VAR13[VAR14], VAR4);
    VAR14 ^= 1;
}
while (0)
    VAR27;
do
{
    int VAR28;
    VAR27;
    VAR28 = VAR15[VAR14];
    if (VAR28 <= 0)
        break;
    FUN12(VAR2->VAR10, VAR13[VAR14], VAR28);
    VAR8 += VAR28;
} while (VAR8 < VAR9);
FUN13(VAR2, &VAR17);
VAR24 : FUN14(VAR12);
return VAR3;
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10;
    if (VAR7 != VAR11 || VAR8 < VAR7 + 8)
    {
        return VAR12;
    }
    VAR10 = FUN2(VAR2, NULL);
    if (!VAR10)
        return FUN3(VAR13);
    FUN4(VAR10, 60, 1, VAR4->VAR14);
    VAR4->VAR15 = VAR10->VAR16;
    VAR10->VAR17->VAR18 = VAR19;
    VAR10->VAR17->VAR20 = VAR21;
    VAR10->VAR17->VAR22 = 4;
    VAR10->VAR17->VAR23 = FUN5(4);
    FUN6(VAR10->VAR17->VAR23, FUN7(VAR6 + 16));
    VAR10->VAR17->VAR24 = FUN7(VAR6 + 36);
    VAR10->VAR17->VAR25 = FUN7(VAR6 + 40);
    return 0;
}
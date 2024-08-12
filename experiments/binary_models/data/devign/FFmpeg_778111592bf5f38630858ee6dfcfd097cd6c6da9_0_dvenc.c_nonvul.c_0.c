static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    if ((VAR11 = FUN2(VAR4, VAR9->VAR12->VAR13)) < 0)
    {
        FUN3(VAR2, VAR14, "");
        return VAR11;
    }
    VAR2->VAR15 = VAR9->VAR12->VAR15;
    VAR9->VAR6 = VAR6;
    VAR2->VAR16->VAR17 = 1;
    VAR2->VAR16->VAR18 = VAR19;
    VAR9->VAR20 = VAR4->VAR21;
    VAR2->FUN4(VAR2, VAR22, VAR9->VAR12->VAR23, NULL, FUN5(VAR9->VAR12), sizeof(VAR24));
    FUN6();
    FUN7(VAR9, VAR4->VAR21);
    VAR4->VAR25 |= VAR26;
    *VAR7 = 1;
    return 0;
}
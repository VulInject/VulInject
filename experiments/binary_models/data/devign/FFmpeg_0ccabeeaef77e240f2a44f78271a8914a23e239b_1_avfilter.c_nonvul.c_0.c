void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    void (*VAR5)(VAR1 *, VAR3 *);
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9 = VAR4->VAR9;
    FUN2(NULL, VAR5);
    FUN3(NULL, VAR2, 0);
    FUN4(NULL, "");
    FUN5(NULL, VAR4, 1);
    if (!(VAR5 = VAR7->VAR5))
        VAR5 = VAR10;
    if (VAR4->VAR11[0] < 0)
        VAR9 |= VAR12;
    if ((VAR7->VAR13 & VAR9) != VAR7->VAR13 || VAR7->VAR14 & VAR9)
    {
        FUN6(VAR2->VAR7, VAR15, "", VAR4->VAR9, VAR2->VAR8->VAR13, VAR2->VAR8->VAR14);
        VAR2->VAR16 = FUN7(VAR2, VAR7->VAR13, VAR2->VAR17, VAR2->VAR18);
        VAR2->VAR19 = VAR4;
        FUN8(VAR2->VAR16, VAR2->VAR19);
    }
    else
        VAR2->VAR16 = VAR4;
    FUN9(VAR2, VAR2->VAR16);
}
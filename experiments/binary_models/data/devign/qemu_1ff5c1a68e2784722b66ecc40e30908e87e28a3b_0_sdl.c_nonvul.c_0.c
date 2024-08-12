static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5;
    VAR5 = VAR6 | VAR7 | VAR8;
    if (VAR9)
        VAR5 |= VAR10;
    VAR11 = FUN2(VAR3, VAR4, 0, VAR5);
    if (!VAR11)
    {
        fprintf(VAR12, "");
        FUN3(1);
    }
    VAR2->VAR13 = VAR11->VAR14;
    VAR2->VAR15 = VAR11->VAR16;
    VAR2->VAR17 = VAR11->VAR18->VAR19;
    VAR2->VAR20 = VAR3;
    VAR2->VAR21 = VAR4;
}
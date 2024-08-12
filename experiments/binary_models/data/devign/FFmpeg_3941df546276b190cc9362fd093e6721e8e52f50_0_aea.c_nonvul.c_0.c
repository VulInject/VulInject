static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2, NULL);
    if (!VAR4)
        return FUN3(VAR5);
    FUN4(VAR2->VAR6, 264);
    VAR4->VAR7->VAR8 = FUN5(VAR2->VAR6);
    FUN4(VAR2->VAR6, 1783);
    VAR4->VAR7->VAR9 = VAR10;
    VAR4->VAR7->VAR11 = VAR12;
    VAR4->VAR7->VAR13 = 44100;
    VAR4->VAR7->VAR14 = 292000;
    if (VAR4->VAR7->VAR8 != 1 && VAR4->VAR7->VAR8 != 2)
    {
        FUN6(VAR2, VAR15, "", VAR4->VAR7->VAR8);
        return VAR16;
    }
    VAR4->VAR7->VAR17 = (VAR4->VAR7->VAR8 == 1) ? VAR18 : VAR19;
    VAR4->VAR7->VAR20 = VAR21 * VAR4->VAR7->VAR8;
    return 0;
}
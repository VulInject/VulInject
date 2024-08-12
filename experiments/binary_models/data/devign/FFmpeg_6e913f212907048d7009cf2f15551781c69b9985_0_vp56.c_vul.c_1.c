static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    int VAR5 = VAR2->VAR6[VAR7]->VAR8[0];
    int VAR9;
    VAR2->VAR10[0] = VAR2->VAR10[3] = VAR4->VAR11;
    VAR2->VAR10[1] = VAR2->VAR10[2] = VAR4->VAR11 / 2;
    VAR2->VAR12[0] = VAR2->VAR12[3] = VAR4->VAR13;
    VAR2->VAR12[1] = VAR2->VAR12[2] = VAR4->VAR13 / 2;
    for (VAR9 = 0; VAR9 < 4; VAR9++)
        VAR2->VAR5[VAR9] = VAR2->VAR14 * VAR2->VAR6[VAR7]->VAR8[VAR9];
    VAR2->VAR15 = (VAR4->VAR11 + 15) / 16;
    VAR2->VAR16 = (VAR4->VAR13 + 15) / 16;
    if (VAR2->VAR15 > 1000 || VAR2->VAR16 > 1000)
    {
        FUN2(VAR4, 0, 0);
        FUN3(VAR4, VAR17, "");
        return VAR18;
    }
    FUN4(&VAR2->VAR19, 4 * VAR2->VAR15 + 6, sizeof(*VAR2->VAR19));
    FUN4(&VAR2->VAR20, VAR2->VAR15 * VAR2->VAR16, sizeof(*VAR2->VAR20));
    FUN5(VAR2->VAR21);
    VAR2->VAR21 = FUN6(16 * VAR5);
    VAR2->VAR22 = VAR2->VAR21;
    if (!VAR2->VAR19 || !VAR2->VAR20 || !VAR2->VAR21)
        return FUN7(VAR23);
    if (VAR2->VAR14 < 0)
        VAR2->VAR22 += 15 * VAR5;
    if (VAR2->VAR24)
        return FUN1(VAR2->VAR24);
    return 0;
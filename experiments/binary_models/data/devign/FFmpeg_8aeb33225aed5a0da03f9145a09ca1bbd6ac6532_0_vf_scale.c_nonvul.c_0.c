static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    int VAR9;
    VAR10 *VAR11 = VAR2->VAR11;
    VAR12 *VAR13[4];
    if (!VAR6->VAR14)
    {
        if (VAR3 != 0 && VAR3 + VAR4 != VAR2->VAR4)
        {
            FUN2(VAR2->VAR7, VAR15, "");
            return;
        }
        VAR6->VAR14 = VAR3 ? -1 : 1;
        VAR6->VAR16 = VAR3 ? VAR2->VAR7->VAR17[0]->VAR4 : VAR3;
    }
    VAR13[0] = VAR11->VAR13[0] + VAR3 * VAR11->VAR18[0];
    VAR13[1] = VAR6->VAR19 ? VAR11->VAR13[1] : VAR11->VAR13[1] + (VAR3 >> VAR6->VAR20) * VAR11->VAR18[1];
    VAR13[2] = VAR11->VAR13[2] + (VAR3 >> VAR6->VAR20) * VAR11->VAR18[2];
    VAR13[3] = VAR11->VAR13[3] + VAR3 * VAR11->VAR18[3];
    VAR9 = FUN3(VAR6->VAR21, VAR13, VAR11->VAR18, VAR3, VAR4, VAR2->VAR7->VAR17[0]->VAR22->VAR13, VAR2->VAR7->VAR17[0]->VAR22->VAR18);
    if (VAR6->VAR14 == -1)
        VAR6->VAR16 -= VAR9;
    FUN4(VAR2->VAR7->VAR17[0], VAR6->VAR16, VAR9);
    if (VAR6->VAR14 == 1)
        VAR6->VAR16 += VAR9;
}
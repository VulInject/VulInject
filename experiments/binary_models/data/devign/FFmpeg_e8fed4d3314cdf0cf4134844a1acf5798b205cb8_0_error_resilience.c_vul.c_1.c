static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR2->VAR4[0] = VAR2->VAR5.VAR6.VAR7[0] + (VAR2->VAR8 * 16 * VAR2->VAR9) + VAR2->VAR10 * 16;
    VAR2->VAR4[1] = VAR2->VAR5.VAR6.VAR7[1] + (VAR2->VAR8 * (16 >> VAR2->VAR11) * VAR2->VAR12) + VAR2->VAR10 * (16 >> VAR2->VAR13);
    VAR2->VAR4[2] = VAR2->VAR5.VAR6.VAR7[2] + (VAR2->VAR8 * (16 >> VAR2->VAR11) * VAR2->VAR12) + VAR2->VAR10 * (16 >> VAR2->VAR13);
    FUN2(VAR2);
    FUN3(VAR2);
    VAR2->VAR4[1] += (16 >> VAR2->VAR13) - 8;
    VAR2->VAR4[2] += (16 >> VAR2->VAR13) - 8;
    if (VAR14 && VAR2->VAR15 == VAR16)
    {
        VAR17 *VAR18 = (void *)VAR2;
        VAR18->VAR19 = VAR2->VAR10 + VAR2->VAR8 * VAR2->VAR20;
        memset(VAR18->VAR21, 0, sizeof(VAR18->VAR21));
        FUN4(VAR3 >= 0);
        if (VAR3 >= VAR18->VAR22[0])
            VAR3 = 0;
        if (!VAR18->VAR23[0][VAR3].VAR6.VAR7[0])
        {
            FUN5(VAR2->VAR24, VAR25, "");
            VAR3 = 0;
            FUN6(&VAR2->VAR5.VAR6.VAR26[0][4 * VAR18->VAR19], 2, 2, 2, VAR3, 1);
            FUN6(&VAR18->VAR27[0][VAR28[0]], 4, 4, 8, VAR3, 1);
            FUN6(VAR18->VAR29[0][VAR28[0]], 4, 4, 8, FUN7(VAR2->VAR30[0][0][0], VAR2->VAR30[0][0][1]), 4);
            VAR18->VAR31 = VAR18->VAR32 = 0;
            FUN8(VAR18);
        }
        else
        {
            assert(VAR3 == 0);
            FUN9(VAR2, VAR2->VAR33);
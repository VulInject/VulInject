static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++)
    {
        for (VAR3 = 0; VAR3 < VAR6; VAR3++)
        {
            VAR7 *VAR8 = &VAR2->VAR9[VAR3];
            const VAR10 *VAR11 = &VAR2->VAR12[VAR4][VAR3 * VAR13];
            FUN2(&VAR2->VAR14, VAR2->VAR15, VAR11, VAR2->VAR16.VAR17, VAR18);
            VAR8->VAR19[VAR4] = FUN3(VAR2);
            VAR2->VAR16.VAR20.FUN4(&VAR2->VAR16.VAR20, VAR8->VAR21[VAR4], VAR2->VAR15);
        }
    }
}
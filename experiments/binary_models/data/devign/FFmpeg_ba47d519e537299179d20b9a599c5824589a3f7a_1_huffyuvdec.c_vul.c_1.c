static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    FUN2(VAR5, &VAR2->VAR6);
    VAR3 /= 2;
    if (VAR3 >= (FUN3(&VAR2->VAR6)) / (32 * 2))
    {
        for (VAR4 = 0; VAR4 < VAR3 && FUN3(&VAR2->VAR6) > 0; VAR4++)
        {
            FUN4(VAR2->VAR7[0][2 * VAR4], VAR2->VAR7[0][2 * VAR4 + 1], 0);
        }
    }
    else
    {
        for (VAR4 = 0; VAR4 < VAR3; VAR4++)
        {
            FUN4(VAR2->VAR7[0][2 * VAR4], VAR2->VAR7[0][2 * VAR4 + 1], 0);
        }
    }
    FUN5(VAR5, &VAR2->VAR6);
}
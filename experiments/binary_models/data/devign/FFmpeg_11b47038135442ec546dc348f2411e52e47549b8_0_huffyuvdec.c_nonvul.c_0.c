static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    FUN2(VAR5, &VAR2->VAR6);
    VAR3 /= 2;
    if (VAR3 >= (FUN3(&VAR2->VAR6)) / (31 * 4))
    {
        for (VAR4 = 0; VAR4 < VAR3 && FUN3(&VAR2->VAR6) > 0; VAR4++)
        {
            FUN4(VAR2->VAR7[0][2 * VAR4], VAR2->VAR7[1][VAR4], 1);
            FUN4(VAR2->VAR7[0][2 * VAR4 + 1], VAR2->VAR7[2][VAR4], 2);
        }
        for (; VAR4 < VAR3; VAR4++)
            VAR2->VAR7[0][2 * VAR4] = VAR2->VAR7[1][VAR4] = VAR2->VAR7[0][2 * VAR4 + 1] = VAR2->VAR7[2][VAR4] = 128;
    }
    else
    {
        for (VAR4 = 0; VAR4 < VAR3; VAR4++)
        {
            FUN4(VAR2->VAR7[0][2 * VAR4], VAR2->VAR7[1][VAR4], 1);
            FUN4(VAR2->VAR7[0][2 * VAR4 + 1], VAR2->VAR7[2][VAR4], 2);
        }
    }
    FUN5(VAR5, &VAR2->VAR6);
}
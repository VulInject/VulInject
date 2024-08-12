static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    VAR3 /= 2;
    if (VAR3 >= (FUN2(&VAR2->VAR5)) / (31 * 4))
    {
        for (VAR4 = 0; VAR4 < VAR3 && FUN2(&VAR2->VAR5) > 0; VAR4++)
        {
            FUN3(VAR2->VAR6[0][2 * VAR4], VAR2->VAR6[1][VAR4], 1);
            FUN3(VAR2->VAR6[0][2 * VAR4 + 1], VAR2->VAR6[2][VAR4], 2);
        }
    }
    else
    {
        for (VAR4 = 0; VAR4 < VAR3; VAR4++)
        {
            FUN3(VAR2->VAR6[0][2 * VAR4], VAR2->VAR6[1][VAR4], 1);
            FUN3(VAR2->VAR6[0][2 * VAR4 + 1], VAR2->VAR6[2][VAR4], 2);
        }
    }
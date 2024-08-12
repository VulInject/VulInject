static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5;
    VAR3 /= 2;
    if (VAR2->VAR6 <= 8)
    {
        FUN2(VAR7, &VAR2->VAR8);
        if (VAR3 >= (FUN3(&VAR2->VAR8)) / (32 * 2))
        {
            for (VAR5 = 0; VAR5 < VAR3 && FUN3(&VAR2->VAR8) > 0; VAR5++)
            {
                FUN4(VAR2->VAR9[0][2 * VAR5], VAR2->VAR9[0][2 * VAR5 + 1], VAR4, VAR10);
            }
        }
        else
        {
            for (VAR5 = 0; VAR5 < VAR3; VAR5++)
            {
                FUN4(VAR2->VAR9[0][2 * VAR5], VAR2->VAR9[0][2 * VAR5 + 1], VAR4, VAR10);
            }
        }
        FUN5(VAR7, &VAR2->VAR8);
    }
    else if (VAR2->VAR6 <= 14)
    {
        FUN2(VAR7, &VAR2->VAR8);
        if (VAR3 >= (FUN3(&VAR2->VAR8)) / (32 * 2))
        {
            for (VAR5 = 0; VAR5 < VAR3 && FUN3(&VAR2->VAR8) > 0; VAR5++)
            {
                FUN4(VAR2->VAR11[0][2 * VAR5], VAR2->VAR11[0][2 * VAR5 + 1], VAR4, VAR12);
            }
        }
        else
        {
            for (VAR5 = 0; VAR5 < VAR3; VAR5++)
            {
                FUN4(VAR2->VAR11[0][2 * VAR5], VAR2->VAR11[0][2 * VAR5 + 1], VAR4, VAR12);
            }
        }
        FUN5(VAR7, &VAR2->VAR8);
    }
    else
    {
        if (VAR3 >= (FUN3(&VAR2->VAR8)) / (32 * 2))
        {
            for (VAR5 = 0; VAR5 < VAR3 && FUN3(&VAR2->VAR8) > 0; VAR5++)
            {
                FUN6(VAR2->VAR11[0][2 * VAR5], VAR2->VAR11[0][2 * VAR5 + 1], VAR4);
            }
        }
        else
        {
            for (VAR5 = 0; VAR5 < VAR3; VAR5++)
            {
                FUN6(VAR2->VAR11[0][2 * VAR5], VAR2->VAR11[0][2 * VAR5 + 1], VAR4);
            }
        }
    }
}
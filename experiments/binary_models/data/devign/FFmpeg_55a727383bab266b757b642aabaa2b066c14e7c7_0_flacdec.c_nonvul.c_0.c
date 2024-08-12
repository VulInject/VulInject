static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    int VAR7 = FUN2(&VAR2->VAR8);
    FUN3(&VAR2->VAR8, 32);
    do
    {
        VAR4 = FUN4(&VAR2->VAR8);
        VAR5 = FUN5(&VAR2->VAR8, 7);
        VAR6 = FUN6(&VAR2->VAR8, 24);
        if (FUN2(&VAR2->VAR8) + 8 * VAR6 > VAR2->VAR8.VAR9)
        {
            FUN3(&VAR2->VAR8, VAR7 - FUN2(&VAR2->VAR8));
            break;
        }
        if (VAR6)
        {
            switch (VAR5)
            {
            case VAR10:
                if (!VAR2->VAR11)
                {
                    FUN7(VAR2->VAR12, (VAR13 *)VAR2, VAR2->VAR8.VAR14 + FUN2(&VAR2->VAR8) / 8);
                    FUN8(VAR2);
                    VAR2->VAR11 = 1;
                }
            default:
                for (VAR3 = 0; VAR3 < VAR6; VAR3++)
                    FUN9(&VAR2->VAR8, 8);
            }
        }
    } while (!VAR4);
    return 0;
}
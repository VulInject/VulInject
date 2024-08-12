void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR3 = FUN2(VAR2, VAR5) - 1;
    if (VAR3 > 0)
    {
        unsigned int VAR6, VAR4;
        VAR6 = FUN3(VAR3, 32);
        VAR2->VAR7 = FUN4(VAR6 / 8);
        VAR2->VAR3 = VAR3;
        for (VAR4 = VAR3; VAR4 < VAR6; VAR4++)
        {
            FUN5(VAR2, VAR4);
        }
    }
    VAR2->VAR8 = FUN4(sizeof(*VAR2->VAR8));
    VAR2->VAR9 = 0;
    if (!VAR2->VAR10)
    {
        for (VAR4 = 0; VAR4 < VAR11; VAR4++)
        {
            FUN6(&VAR2->VAR12[VAR4]);
        }
    }
    FUN7(VAR2);
}
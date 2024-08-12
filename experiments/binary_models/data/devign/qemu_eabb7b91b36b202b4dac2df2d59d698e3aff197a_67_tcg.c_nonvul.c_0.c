static void FUN1(VAR1 *VAR2, TCGRegSet VAR3)
{
    int VAR4;
    for (VAR4 = VAR2->VAR5; VAR4 < VAR2->VAR6; VAR4++)
    {
        VAR7 *VAR8 = &VAR2->VAR9[VAR4];
        if (VAR8->VAR10)
        {
            FUN2(VAR2, VAR8, VAR3);
        }
        else
        {
            if (!VAR8->VAR11)
            {
                FUN3(VAR8->VAR12 == VAR13);
                continue;
            }
            FUN4(VAR2, VAR8);
        }
    }
    FUN5(VAR2, VAR3);
}
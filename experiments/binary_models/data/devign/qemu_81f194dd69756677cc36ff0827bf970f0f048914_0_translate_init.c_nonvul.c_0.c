static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = &VAR6->VAR8;
    VAR9 **VAR10;
    int VAR11, VAR12;
    for (VAR11 = 0; VAR11 < VAR13; VAR11++)
    {
        if (VAR8->VAR14[VAR11] == &VAR15)
        {
            continue;
        }
        if (FUN3(VAR8->VAR14[VAR11]))
        {
            VAR10 = FUN4(VAR8->VAR14[VAR11]);
            for (VAR12 = 0; VAR12 < VAR16; VAR12++)
            {
                if (VAR10[VAR12] != &VAR15 && FUN3(VAR10[VAR12]))
                {
                    FUN5((VAR9 *)((VAR17)VAR10[VAR12] & ~VAR18));
                }
            }
            FUN5((VAR9 *)((VAR17)VAR8->VAR14[VAR11] & ~VAR18));
        }
    }
}
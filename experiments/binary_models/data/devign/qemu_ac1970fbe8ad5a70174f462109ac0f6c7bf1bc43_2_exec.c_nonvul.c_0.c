void FUN1(target_phys_addr_t VAR1, uint64_t VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    VAR6 = FUN2(VAR7.VAR8, VAR1 >> VAR9);
    if (!FUN3(VAR6->VAR10) || VAR6->VAR11)
    {
        VAR1 = FUN4(VAR6, VAR1);
        if (FUN3(VAR6->VAR10))
        {
            VAR6 = &VAR12[VAR13];
        }
        FUN5(VAR6->VAR10, VAR1, VAR2 >> 32, 4);
        FUN5(VAR6->VAR10, VAR1 + 4, (VAR14)VAR2, 4);
        FUN5(VAR6->VAR10, VAR1, (VAR14)VAR2, 4);
        FUN5(VAR6->VAR10, VAR1 + 4, VAR2 >> 32, 4);
    }
    else
    {
        VAR4 = FUN6((FUN7(VAR6->VAR10) & VAR15) + FUN4(VAR6, VAR1));
        FUN8(VAR4, VAR2);
    }
}
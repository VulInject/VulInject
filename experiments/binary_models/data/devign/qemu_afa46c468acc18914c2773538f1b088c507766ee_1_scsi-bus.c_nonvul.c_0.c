VAR1 *FUN1(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5, VAR6 *VAR7, void *VAR8)
{
    VAR1 *VAR9;
    SCSICommand VAR10;
    if (FUN2(&VAR10, VAR3, VAR7) != 0)
    {
        FUN3(VAR3->VAR11, VAR5, VAR4, VAR7[0]);
        VAR9 = FUN4(&VAR12, VAR3, VAR4, VAR5, VAR8);
    }
    else
    {
        FUN5(VAR3->VAR11, VAR5, VAR4, VAR7[0], VAR10.VAR13, VAR10.VAR14);
        if (VAR9->VAR10.VAR15 != -1)
        {
            FUN6(VAR3->VAR11, VAR5, VAR4, VAR7[0], VAR10.VAR15);
        }
        VAR9 = VAR3->VAR16->FUN7(VAR3, VAR4, VAR5, VAR8);
    }
    VAR9->VAR10 = VAR10;
    return VAR9;
}
FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    uint32_t VAR5 = VAR4->VAR6[VAR7];
    if (VAR2->VAR8)
    {
        FUN3(VAR4);
    }
    else
    {
        if (FUN4(VAR4) && !(VAR4->VAR9[VAR10] & VAR11))
        {
            FUN5(VAR4->VAR12, FUN6(VAR13) + 500);
        }
        else
        {
            FUN7(VAR4);
        }
    }
    if (VAR4->VAR6[VAR7] != VAR5)
        FUN8(VAR4, 0, VAR14);
}
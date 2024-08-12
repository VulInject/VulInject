static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    uint8_t VAR6 = FUN2(VAR4, 1);
    if (!VAR6)
    {
        if ((VAR5 = FUN3(VAR2, VAR4)) < 0)
            return VAR5;
    }
    else if (!VAR2->VAR7.VAR8->VAR9)
    {
        FUN4(VAR2->VAR7.VAR8, VAR10, "");
        return FUN5(VAR11);
    }
    if (VAR2->VAR12 == 0)
    {
        int VAR13 = FUN6(VAR2, VAR4);
        if (VAR13 * 8 > FUN7(VAR4))
        {
            FUN4(VAR2->VAR7.VAR8, VAR14, "");
            return VAR15;
        }
        else if (VAR13 * 8 + 256 < FUN7(VAR4))
        {
            FUN4(VAR2->VAR7.VAR8, VAR14, "", VAR13 * 8, FUN7(VAR4));
            return VAR15;
        }
    }
    return 0;
}
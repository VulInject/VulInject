static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR2->VAR8.VAR9);
    VAR3 *VAR10 = VAR4;
    int VAR11 = VAR2->VAR8.VAR12.VAR13;
    VAR14 *VAR15;
    if (VAR2->VAR8.VAR12.VAR16[1] & 0x1)
    {
        goto VAR17;
    }
    if (VAR11 < 8)
    {
        goto VAR18;
    }
    if (VAR11 < FUN3(&VAR10[0]) + 2)
    {
        goto VAR18;
    }
    if (VAR11 < FUN3(&VAR10[2]) + 8)
    {
        goto VAR18;
    }
    if (FUN3(&VAR10[2]) & 15)
    {
        goto VAR18;
    }
    if (FUN4(VAR6->VAR7.VAR19.VAR20))
    {
        FUN5(VAR2, FUN6(VAR21));
        return;
    }
    VAR15 = FUN7(VAR14, 1);
    VAR15->VAR2 = VAR2;
    VAR15->VAR4 = &VAR10[8];
    VAR15->VAR22 = FUN3(&VAR10[2]) >> 4;
    FUN8(&VAR2->VAR8);
    FUN9(VAR15, 0);
    return;
VAR18:
    FUN5(VAR2, FUN6(VAR23));
    return;
VAR17:
    FUN5(VAR2, FUN6(VAR24));
}
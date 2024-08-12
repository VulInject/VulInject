int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 0;
    VAR6 *VAR7;
    VAR6 *VAR8;
    VAR6 *VAR9;
    LOCK_OPENCL if (!VAR10.VAR11)
    {
        VAR8 = FUN2(VAR2, "", NULL, 0);
        VAR9 = FUN2(VAR2, "", NULL, 0);
        VAR10.VAR12.VAR13 = -1;
        VAR10.VAR12.VAR14 = -1;
        if (VAR8)
        {
            VAR10.VAR12.VAR13 = FUN3(VAR8->VAR15, NULL, 10);
        }
        if (VAR9)
        {
            VAR10.VAR12.VAR14 = FUN3(VAR9->VAR15, NULL, 10);
        }
        VAR5 = FUN4(&VAR10, VAR4);
        if (VAR5 < 0)
            goto VAR16;
    }
    VAR7 = FUN2(VAR2, "", NULL, 0);
    if (VAR7)
        VAR5 = FUN5(&VAR10, VAR7->VAR15);
    else
        VAR5 = FUN5(&VAR10, NULL);
    if (VAR5 < 0)
        goto VAR16;
    FUN6(VAR10.VAR17 > 0);
    VAR10.VAR11++;
VAR16:
    UNLOCK_OPENCL return VAR5;
}
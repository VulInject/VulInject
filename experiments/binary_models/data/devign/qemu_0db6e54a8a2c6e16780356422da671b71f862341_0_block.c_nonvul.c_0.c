static int FUN1(void)
{
    VAR1 *VAR2;
    int VAR3;
    FUN2(VAR2, &VAR4.VAR5, VAR6)
    {
        VAR2->VAR7 = FUN3(VAR2->VAR8, VAR9, NULL, NULL);
        if (!VAR2->VAR7)
        {
            VAR3 = -VAR10;
            goto VAR11;
        }
    }
    return 0;
VAR11:
    FUN2(VAR2, &VAR4.VAR5, VAR6)
    {
        if (VAR2->VAR7)
        {
            FUN4(VAR2->VAR8, VAR2->VAR7);
        }
    }
    return VAR3;
}
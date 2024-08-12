void FUN1(int VAR1)
{
    struct VAR2 *VAR3, *VAR4;
    struct VAR5 *VAR6;
    struct VAR7 *VAR8;
    int VAR9 = 0;
VAR10:
    VAR9++;
    FUN2(true);
    VAR3 = FUN3("", VAR1, 0);
    VAR4 = FUN3("", VAR1, 0);
    if (!VAR3 || !VAR4)
    {
        if (VAR9 < 256)
        {
            FUN4(10000);
            goto VAR10;
        }
        FUN5(NULL, 1, "");
        return;
    }
    VAR6 = FUN6(VAR3, struct VAR5, VAR11.VAR12);
    VAR6->VAR11.VAR13 = FUN7(VAR14, VAR15, NULL, VAR6);
    VAR6->VAR16 = 1;
    VAR8 = FUN6(VAR4, struct VAR7, VAR11.VAR12);
    VAR8->VAR11.VAR13 = VAR6->VAR11.VAR13;
    FUN8(VAR4);
    FUN8(VAR3);
}
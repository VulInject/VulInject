int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4[2];
    int VAR5;
    VAR5 = FUN2(0, VAR6 | VAR7);
    VAR5 = -1;
    VAR8 = VAR9;
    if (VAR5 >= 0)
    {
        VAR2->VAR10 = VAR2->VAR11 = VAR5;
    }
    else
    {
        if (VAR8 != VAR9)
        {
            return -VAR8;
        }
        if (FUN3(VAR4) < 0)
        {
            return -VAR8;
        }
        VAR5 = FUN4(VAR4[0], VAR12);
        if (VAR5 < 0)
        {
            VAR5 = -VAR8;
            goto VAR13;
        }
        VAR5 = FUN4(VAR4[1], VAR12);
        if (VAR5 < 0)
        {
            VAR5 = -VAR8;
            goto VAR13;
        }
        VAR2->VAR10 = VAR4[0];
        VAR2->VAR11 = VAR4[1];
    }
    if (VAR3)
    {
        FUN5(VAR2);
    }
    return 0;
VAR13:
    close(VAR4[0]);
    close(VAR4[1]);
    return VAR5;
}
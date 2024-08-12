VAR1 FUN1(VAR2 **VAR3)
{
    int VAR4;
    GuestFsfreezeMountList VAR5;
    VAR6 *VAR7;
    int VAR8, VAR9 = 0, VAR10;
    FUN2(&VAR5);
    VAR4 = FUN3(&VAR5);
    if (VAR4)
    {
        FUN4(VAR3, VAR11, "");
        return 0;
    }
    FUN5(VAR7, &VAR5, VAR12)
    {
        VAR10 = false;
        VAR8 = FUN6(VAR7->VAR13, VAR14);
        if (VAR8 == -1)
        {
            continue;
        }
        do
        {
            VAR4 = FUN7(VAR8, VAR15);
            if (VAR4 == 0 && !VAR10)
            {
                VAR9++;
                VAR10 = true;
            }
        } while (VAR4 == 0);
        close(VAR8);
    }
    FUN8(VAR16);
    FUN9(&VAR5);
    return VAR9;
}
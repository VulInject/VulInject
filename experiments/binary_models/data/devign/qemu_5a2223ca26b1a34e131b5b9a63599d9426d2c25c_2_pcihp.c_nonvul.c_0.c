int FUN1(VAR1 *VAR2, VAR3 *VAR4, PCIHotplugState VAR5)
{
    int VAR6 = FUN2(VAR4->VAR7);
    int VAR8 = FUN3(VAR4->VAR9);
    if (VAR8 < 0)
    {
        return -1;
    }
    if (VAR5 == VAR10)
    {
        return 0;
    }
    if (VAR5 == VAR11)
    {
        FUN4(VAR2, VAR8, VAR6);
    }
    else
    {
        FUN5(VAR2, VAR8, VAR6);
    }
    return 0;
}
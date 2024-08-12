static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    VAR5 = FUN2(VAR2->VAR7, VAR4, VAR8);
    if (VAR5 < 0)
        return VAR5;
    if (VAR5 < VAR8)
    {
        FUN3(VAR4);
        return FUN4(VAR9);
    }
    if ((FUN5(VAR4->VAR10) >> 4) != 0xfff)
    {
        FUN3(VAR4);
        return VAR11;
    }
    VAR6 = (FUN6(VAR4->VAR10 + 3) >> 13) & 0x1FFF;
    if (VAR6 < VAR8)
    {
        FUN3(VAR4);
        return VAR11;
    }
    return FUN7(VAR2->VAR7, VAR4, VAR6 - VAR8);
}
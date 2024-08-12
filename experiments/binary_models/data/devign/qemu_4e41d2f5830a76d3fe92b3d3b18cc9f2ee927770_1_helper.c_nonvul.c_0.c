int FUN1(VAR1 *VAR2, bool VAR3, uint32_t VAR4, int VAR5, int VAR6, VAR7 *VAR8, VAR7 *VAR9, unsigned *VAR10)
{
    if (FUN2(VAR2->VAR11, VAR12))
    {
        return FUN3(VAR2, VAR3, VAR4, VAR5, VAR6, VAR8, VAR9, VAR10, true);
    }
    else if (FUN4(VAR2->VAR11, FUN5(VAR13) | FUN5(VAR14)))
    {
        return FUN6(VAR2, VAR4, VAR5, VAR6, VAR8, VAR9, VAR10);
    }
    else
    {
        *VAR8 = VAR4;
        *VAR9 = VAR15;
        *VAR10 = FUN7(VAR2->VAR16[VAR17] >> ((VAR4 & 0xe0000000) >> 27));
        return 0;
    }
}
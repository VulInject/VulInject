static void FUN1(VAR1 *VAR2, int VAR3)
{
    int32_t VAR4, VAR5;
    VAR6 *VAR7 = VAR2->VAR8[0];
    VAR6 *VAR9 = VAR2->VAR8[1];
    if (VAR2->VAR10 & VAR11)
    {
        FUN2(VAR2->VAR12, VAR13, "");
        return;
    }
    VAR2->FUN3(VAR2, VAR3);
    VAR2->FUN4(VAR2, VAR3);
    while (VAR3--)
    {
        VAR4 = *VAR9 - (*VAR7 / 2);
        VAR5 = VAR4 + *VAR7;
        *(VAR7++) = VAR4;
        *(VAR9++) = VAR5;
    }
}
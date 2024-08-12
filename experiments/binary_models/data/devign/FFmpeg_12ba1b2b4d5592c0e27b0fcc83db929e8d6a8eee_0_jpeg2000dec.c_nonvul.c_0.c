static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6 = 1;
    void *VAR7[3];
    for (VAR5 = 1; VAR5 < 3; VAR5++)
    {
        if (VAR4->VAR8[0].VAR9 != VAR4->VAR8[VAR5].VAR9)
        {
            FUN2(VAR2->VAR10, VAR11, "");
            return;
        }
        if (memcmp(VAR4->VAR12[0].VAR13, VAR4->VAR12[VAR5].VAR13, sizeof(VAR4->VAR12[0].VAR13)))
        {
            FUN2(VAR2->VAR10, VAR11, "");
            return;
        }
    }
    for (VAR5 = 0; VAR5 < 3; VAR5++)
        if (VAR4->VAR8[0].VAR9 == VAR14)
            VAR7[VAR5] = VAR4->VAR12[VAR5].VAR15;
        else
            VAR7[VAR5] = VAR4->VAR12[VAR5].VAR16;
    for (VAR5 = 0; VAR5 < 2; VAR5++)
        VAR6 *= VAR4->VAR12[0].VAR13[VAR5][1] - VAR4->VAR12[0].VAR13[VAR5][0];
    VAR2->VAR17.VAR18[VAR4->VAR8[0].VAR9](VAR7[0], VAR7[1], VAR7[2], VAR6);
}
FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4)
{
    uint32_t VAR5[2];
    VAR2->VAR6[VAR3] = VAR4;
    if (VAR3 == VAR7 + 1)
    {
        VAR5[0] = FUN2(VAR2->VAR6[VAR7]);
        VAR5[1] = FUN2(VAR2->VAR6[VAR7 + 1]);
        FUN3(FUN4(VAR2->VAR8), (VAR9 *)VAR5);
    }
}
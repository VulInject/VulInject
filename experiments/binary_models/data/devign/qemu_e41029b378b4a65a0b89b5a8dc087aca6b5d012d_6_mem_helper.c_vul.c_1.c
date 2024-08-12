void FUN1(VAR1 *VAR2, target_ulong VAR3, uint32_t VAR4, uint32_t VAR5)
{
    int VAR6;
    for (; VAR4 > 3; VAR4 -= 4)
    {
        FUN2(VAR2, VAR3, VAR2->VAR7[VAR5]);
        VAR5 = (VAR5 + 1) % 32;
        VAR3 = FUN3(VAR2, VAR3, 4);
    }
    if (FUN4(VAR4 > 0))
    {
        for (VAR6 = 24; VAR4 > 0; VAR4--, VAR6 -= 8)
        {
            FUN5(VAR2, VAR3, (VAR2->VAR7[VAR5] >> VAR6) & 0xFF);
            VAR3 = FUN3(VAR2, VAR3, 1);
        }
    }
}
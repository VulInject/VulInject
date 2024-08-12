FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3)
    {
        uint32_t VAR4 = (VAR2->VAR5 << 4) | (VAR2->VAR3 >> 1);
        TCGv VAR6 = FUN2();
        FUN3(VAR6, VAR4);
        FUN4(VAR6, VAR7);
    }
}
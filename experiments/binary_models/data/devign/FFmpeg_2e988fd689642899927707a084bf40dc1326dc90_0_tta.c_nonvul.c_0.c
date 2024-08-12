static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int32_t VAR5)
{
    memset(VAR4, 0, sizeof(VAR3));
    if (VAR2->VAR6 == VAR7)
    {
        int VAR8;
        for (VAR8 = 0; VAR8 < 8; VAR8++)
            VAR4->VAR9[VAR8] = FUN2(VAR2->VAR10[VAR8], 8);
    }
    VAR4->VAR5 = VAR5;
    VAR4->VAR11 = VAR12[VAR5 - 1];
}
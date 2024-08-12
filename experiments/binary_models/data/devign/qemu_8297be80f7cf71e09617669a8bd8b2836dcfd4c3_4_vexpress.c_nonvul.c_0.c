static void FUN1(const struct VAR1 *VAR2, void *VAR3)
{
    uint32_t VAR4, VAR5, VAR6;
    const VAR7 *VAR8 = (const VAR7 *)VAR2;
    VAR4 = FUN2(VAR3, "", "", NULL, &VAR9);
    VAR5 = FUN2(VAR3, "", "", NULL, &VAR9);
    VAR6 = FUN3(VAR3);
    if (!VAR6)
    {
        FUN4(""
                    "");
    }
    else
    {
        int VAR10;
        const VAR11 *VAR12 = VAR8->VAR13;
        for (VAR10 = VAR14 - 1; VAR10 >= 0; VAR10--)
        {
            FUN5(VAR3, VAR4, VAR5, VAR12[VAR15] + 0x200 * VAR10, 0x200, VAR6, 40 + VAR10);
        }
    }
}
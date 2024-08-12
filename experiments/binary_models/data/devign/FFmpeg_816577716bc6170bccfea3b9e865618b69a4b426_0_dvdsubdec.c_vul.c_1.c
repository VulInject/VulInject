static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    if (VAR7->VAR5 > 0xffff - VAR5)
    {
        FUN2(VAR2, VAR9, ""
                                      "");
        FUN3(&VAR7->VAR4);
        return VAR10;
    }
    VAR7->VAR4 = FUN4(VAR7->VAR4, VAR7->VAR5 + VAR5);
    if (!VAR7->VAR4)
        return FUN5(VAR11);
    memcpy(VAR7->VAR4 + VAR7->VAR5, VAR4, VAR5);
    VAR7->VAR5 += VAR5;
    return 0;
}
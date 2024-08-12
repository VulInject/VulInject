static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6 = FUN2(VAR2->VAR7, 32) / 32;
    int VAR8, VAR9;
    bool VAR10 = true;
VAR11:
    for (VAR8 = 0; VAR8 < VAR6; VAR8++)
    {
        VAR9 = FUN3(~VAR4[VAR8]);
        if (VAR9 == 32)
        {
            continue;
        }
        return VAR9 + VAR8 * 32;
    }
    if (!VAR2->VAR12 && VAR10)
    {
        VAR10 = false;
        FUN4(VAR2);
        goto VAR11;
    }
    return -VAR13;
}
static VAR1 FUN1(VAR2 *VAR3, int *VAR4, VAR5 **VAR6)
{
    int64_t VAR7;
    int VAR8, VAR9;
    VAR8 = 0;
    do
    {
        VAR9 = FUN2(&VAR3->VAR10, (VAR11 *)&VAR7 + VAR8, sizeof(VAR7) - VAR8);
        if (VAR9 < 0)
        {
            if (VAR9 == -VAR12)
            {
                continue;
            }
            FUN3(VAR6, -VAR9, "");
            return VAR13;
        }
        VAR8 += VAR9;
    } while (VAR8 < sizeof(VAR7));
    *VAR4 = FUN4(&VAR3->VAR10);
    return VAR7;
}
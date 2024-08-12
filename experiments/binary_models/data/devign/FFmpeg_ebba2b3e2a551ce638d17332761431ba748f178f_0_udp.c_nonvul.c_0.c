static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    if (!(VAR2->VAR10 & VAR11))
    {
        VAR9 = FUN2(VAR7->VAR12, 1);
        if (VAR9 < 0)
            return VAR9;
    }
    if (!VAR7->VAR13)
    {
        VAR9 = sendto(VAR7->VAR12, VAR4, VAR5, 0, (struct VAR14 *)&VAR7->VAR15, VAR7->VAR16);
    }
    else
        VAR9 = send(VAR7->VAR12, VAR4, VAR5, 0);
    return VAR9 < 0 ? FUN3() : VAR9;
}
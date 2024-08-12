static VAR1 FUN1(struct VAR2 *VAR3)
{
    size_t VAR4 = 0;
    ssize_t VAR5;
    do
    {
        if (VAR3->VAR6 & VAR7)
            VAR5 = FUN2(VAR3->VAR8, VAR3->VAR9, VAR3->VAR10, VAR3->VAR11 + VAR4);
        else
            VAR5 = FUN3(VAR3->VAR8, VAR3->VAR9, VAR3->VAR10, VAR3->VAR11 + VAR4);
    } while (VAR5 == -1 && VAR12 == VAR13);
    if (VAR5 == -1)
        return -VAR12;
    return VAR5;
}
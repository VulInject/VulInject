static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    int VAR9, VAR10;
    for (VAR9 = 0; VAR9 < VAR11; VAR9++)
    {
        VAR6 = &VAR2->VAR12[VAR9];
        VAR8 = VAR6->VAR6.VAR8;
        if (VAR8 && VAR8->VAR13 && (VAR6->VAR14 & VAR15))
        {
            VAR10 = FUN2(VAR8, VAR4);
            if (VAR10 != VAR16)
            {
                return VAR10;
            }
        }
    }
    return VAR16;
}
static void FUN1(VAR1 *VAR2, unsigned VAR3, unsigned VAR4, unsigned VAR5)
{
    int VAR6 = VAR3 == VAR7 ? 2 : 0;
    VAR2->VAR8[VAR6++] = VAR4;
    VAR2->VAR8[VAR6] = VAR5;
    if (VAR2->VAR8[0] && VAR2->VAR8[1] && VAR2->VAR8[2] && VAR2->VAR8[3])
        FUN2(&VAR2->VAR9->VAR10.VAR4, &VAR2->VAR9->VAR10.VAR5, VAR2->VAR8[2] * (VAR11)VAR2->VAR8[1], VAR2->VAR8[0] * (VAR11)VAR2->VAR8[3], VAR12);
}
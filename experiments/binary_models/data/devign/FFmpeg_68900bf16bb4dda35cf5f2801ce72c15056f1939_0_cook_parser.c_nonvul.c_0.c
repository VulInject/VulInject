static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    if (!VAR11->VAR13 && VAR4->VAR14 && VAR4->VAR15 >= 8 && VAR4->VAR16)
        VAR11->VAR13 = FUN2(VAR4->VAR14 + 4) / VAR4->VAR16;
    VAR2->VAR13 = VAR11->VAR13;
    *VAR6 = VAR8;
    *VAR7 = VAR9;
    return VAR9;
}
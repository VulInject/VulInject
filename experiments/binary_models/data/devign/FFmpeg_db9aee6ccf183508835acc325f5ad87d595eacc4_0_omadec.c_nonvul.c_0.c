static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = VAR2->VAR9[0]->VAR10->VAR11;
    int VAR12 = FUN2(VAR2->VAR13, VAR4, VAR8);
    if (VAR12 < 0)
        return VAR12;
    if (!VAR12)
        return VAR14;
    VAR4->VAR15 = 0;
    if (VAR6->VAR16)
    {
        FUN3(&VAR6->VAR17, VAR4->VAR18, VAR4->VAR18, (VAR8 >> 3), VAR6->VAR19, 1);
    }
    return VAR12;
}
static int FUN1(VAR1 *VAR2)
{
    if (FUN2(&VAR2->VAR3[0]) != VAR4)
        return 0;
    if (FUN3(&VAR2->VAR3[2]) != VAR5 && FUN3(&VAR2->VAR3[2]) != VAR6)
        return 0;
    return VAR7 / 2;
}
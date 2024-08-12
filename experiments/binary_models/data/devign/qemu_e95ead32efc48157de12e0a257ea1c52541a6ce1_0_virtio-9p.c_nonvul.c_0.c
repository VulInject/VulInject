static int FUN1(VAR1 *VAR2, VAR3 *VAR4, mode_t VAR5)
{
    FsCred VAR6;
    FUN2(&VAR6);
    VAR6.VAR7 = VAR5;
    return VAR2->VAR8->chmod(&VAR2->VAR9, VAR4->VAR10, &VAR6);
}
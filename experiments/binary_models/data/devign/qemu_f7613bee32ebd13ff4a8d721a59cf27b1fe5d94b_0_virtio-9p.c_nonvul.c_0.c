static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uid_t VAR5, gid_t VAR6)
{
    FsCred VAR7;
    FUN2(&VAR7);
    VAR7.VAR8 = VAR5;
    VAR7.VAR9 = VAR6;
    return VAR2->VAR10->chown(&VAR2->VAR11, VAR4->VAR12, &VAR7);
}
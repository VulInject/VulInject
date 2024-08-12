static inline void FUN1(struct VAR1 *VAR2)
{
    read_local_name_rp VAR3;
    VAR3.VAR4 = VAR5;
    memset(VAR3.VAR6, 0, sizeof(VAR3.VAR6));
    if (VAR2->VAR7.VAR8)
        strncpy(VAR3.VAR6, VAR2->VAR7.VAR8, sizeof(VAR3.VAR6));
    FUN2(VAR2, &VAR3, VAR9);
}
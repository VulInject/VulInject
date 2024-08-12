static inline int FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3)
{
return memcmp(VAR2, VAR3, sizeof(*VAR2)) == 0;
}
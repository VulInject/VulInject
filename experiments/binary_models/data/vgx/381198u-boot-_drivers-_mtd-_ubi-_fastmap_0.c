static inline void FUN1(struct VAR1 *VAR2, int VAR3, int *VAR4)
{
if (!FUN2(VAR2) || !VAR4)
return;

VAR4[VAR3] = 1;
}
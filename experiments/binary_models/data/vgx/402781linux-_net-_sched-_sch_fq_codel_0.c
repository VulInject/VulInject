static inline void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
if (VAR2->VAR5 == NULL)
VAR2->VAR5 = VAR4;
else
VAR2->VAR6->VAR7 = VAR4;
VAR2->VAR6 = VAR4;
VAR4->VAR7 = NULL;
}
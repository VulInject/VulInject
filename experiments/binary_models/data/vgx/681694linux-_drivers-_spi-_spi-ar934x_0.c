static inline int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
int VAR4 = FUN2(VAR2->VAR5, VAR3 * 2) - 1;

if (VAR4 < 0)
return 0;
else if (VAR4 > VAR6)
return -VAR7;
else
return VAR4;
}
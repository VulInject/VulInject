static inline int FUN1(struct VAR1 *VAR2)
{
int VAR3;


if (!VAR2->VAR4)
return -1;

VAR3 = FUN2(VAR2);
FUN3(VAR3 == -1 || VAR3 >= 16);

return VAR3;
}
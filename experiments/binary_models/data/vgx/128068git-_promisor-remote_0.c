struct VAR1 *FUN1(struct VAR2 *VAR3,
const char *VAR4)
{
FUN2(VAR3);

if (!VAR4)
return VAR3->VAR5->VAR6;

return FUN3(VAR3->VAR5, VAR4, NULL);
}
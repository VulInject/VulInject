static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
(void)VAR5;

VAR3->VAR6.VAR7.VAR8 = calloc(1, sizeof(struct VAR9));
if(!VAR3->VAR6.VAR7.VAR8)
return VAR10;

return VAR11;
}
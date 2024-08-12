static int FUN1(struct VAR1 *VAR2,
const char *VAR3,
enum pinctrl_map_type VAR4,
unsigned long *VAR5,
unsigned int VAR6)
{
unsigned long *VAR7;

VAR7 = FUN2(VAR5, VAR6 * sizeof(*VAR7),
VAR8);
if (!VAR7)
return -VAR9;

VAR2->VAR4 = VAR4;
VAR2->VAR10.VAR5.VAR3 = VAR3;
VAR2->VAR10.VAR5.VAR5 = VAR7;
VAR2->VAR10.VAR5.VAR6 = VAR6;

return 0;
}
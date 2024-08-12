static int FUN1(struct VAR1 *VAR2, const VAR3 *VAR4,
unsigned int VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
unsigned int VAR8 = FUN3();
int VAR9;

VAR9 = FUN4(VAR2, VAR4, VAR5);
if (VAR9)
return VAR9;


switch (VAR5) {
case VAR10 * 2:
memcpy(VAR7->VAR11.VAR12.VAR4, VAR4, VAR5);
break;
case VAR13 * 2:
if (VAR8 > FUN5(3, 0))
memcpy(VAR7->VAR11.VAR12.VAR4, VAR4, VAR5);
break;
}
VAR7->VAR11.VAR12.VAR5 = VAR5 / 2;
FUN6(&VAR7->VAR11.VAR12.VAR14, VAR7->VAR11.VAR12.VAR4, VAR5);

return FUN7(VAR7->VAR11.VAR12.VAR15, VAR4, VAR5);
}
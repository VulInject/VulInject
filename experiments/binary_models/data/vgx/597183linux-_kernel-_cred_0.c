struct VAR1 *FUN1(void)
{
struct VAR1 *new;

new = FUN2();
if (!new)
return new;


FUN3(new->VAR2);
new->VAR2 = NULL;


FUN3(new->VAR3);
new->VAR3 = NULL;

new->VAR4 = new->VAR5 = new->VAR6;
new->VAR7 = new->VAR8 = new->VAR9;

return new;
}
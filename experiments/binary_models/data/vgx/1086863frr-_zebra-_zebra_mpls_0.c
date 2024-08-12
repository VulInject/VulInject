static int FUN1(struct VAR1 *VAR2,
mpls_label_t VAR3)
{
struct VAR4 *VAR5;
struct zebra_ile VAR6;
struct VAR7 *VAR8;


VAR5 = VAR2->VAR5;
if (!VAR5)
return -1;


VAR6.VAR3 = VAR3;
VAR8 = FUN2(VAR5, &VAR6);
if (!VAR8 || (FUN3(&VAR8->VAR9) == NULL))
return 0;

return FUN4(VAR5, VAR8, VAR10);
}
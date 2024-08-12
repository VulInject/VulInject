static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;

VAR4->VAR6 = VAR7;


VAR5 = FUN3(VAR8, VAR2, "",
&VAR4->VAR9);
if (VAR5) {
FUN4("", VAR10);
return VAR5;
}

return 0;
}

const struct mdio_ops VAR11 = {
.read = VAR12,
.write = VAR13,
.VAR14 = VAR15,
};
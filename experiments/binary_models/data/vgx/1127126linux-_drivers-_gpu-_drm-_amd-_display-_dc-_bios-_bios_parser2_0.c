static enum VAR1 FUN1(
struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
struct VAR6
*VAR7 = FUN2(VAR3);
struct VAR8 *VAR9;
struct atom_data_revision VAR10;

if (!FUN3(VAR11))
return VAR12;

VAR9 = FUN4(struct VAR8, FUN3(VAR11));

if (!VAR9)
return VAR13;

FUN5(VAR9, &VAR10);

switch (VAR10.VAR14) {
case 2:
switch (VAR10.VAR15) {
case 1:
return FUN6(VAR7, VAR5);
default:
break;
}
break;
default:
break;
}

return VAR12;
}
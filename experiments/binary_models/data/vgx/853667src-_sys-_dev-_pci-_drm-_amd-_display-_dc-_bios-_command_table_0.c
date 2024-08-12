static enum VAR1 FUN1(
struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
enum bp_result VAR6 = VAR7;
struct VAR8 *VAR8 = &VAR3->VAR8;

if (VAR5 != NULL)
switch (VAR5->VAR9) {
case VAR10:
if (VAR8->VAR11 != NULL)
VAR6 =
VAR8->FUN2(VAR3, VAR5);
break;
case VAR12:
if (VAR8->VAR13 != NULL)
VAR6 =
VAR8->FUN3(VAR3, VAR5);
break;

default:
break;
}

return VAR6;
}
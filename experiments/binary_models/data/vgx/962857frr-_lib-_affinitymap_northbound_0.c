static int FUN1(struct VAR1 *VAR2)
{
const char *VAR3;

VAR3 = FUN2((const struct VAR4 *)VAR2->VAR5,
"");

switch (VAR2->VAR6) {
case VAR7:
if (!FUN3(VAR3))
break;
snprintf(VAR2->VAR8, VAR2->VAR9,
"", VAR3);
return VAR10;
case VAR11:
case VAR12:
break;
case VAR13:
FUN4(VAR3);
break;
}
return VAR14;
}
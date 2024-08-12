static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct fs_parse_result VAR5;
struct VAR6 *VAR7 = VAR2->VAR8;
int VAR9;

VAR9 = FUN2(VAR2, VAR10, VAR4, &VAR5);
if (VAR9 < 0)
return VAR9;

switch (VAR9) {
case VAR11:
return FUN3(VAR2, VAR4);

case VAR12:
VAR7->VAR13 = true;
break;

case VAR14:
VAR7->VAR15 = true;
break;

case VAR16:
VAR7->VAR17 = VAR5.VAR18;
break;

default:
return -VAR19;
}

_leave("");
return 0;
}
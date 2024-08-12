static struct VAR1 *FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
struct VAR1 *VAR6;
FUN2(VAR6, &VAR3->VAR7, VAR8) {

if (!VAR6->VAR5 ||
VAR5->VAR9 != VAR6->VAR5->VAR9 ||
VAR6->VAR10 != VAR3->VAR10)
continue;
switch (VAR5->VAR9) {
case VAR11:
if (VAR5->VAR12 != VAR13)
break;
return VAR6;
case VAR14:
case VAR15:
if ((VAR6->VAR5->VAR16 & 0xffffffff) ==
(VAR5->VAR16 & 0xffffffff))
return VAR6;
default: 
;
}
if (VAR6->VAR5->VAR16 == VAR5->VAR16)
return VAR6;
}

return NULL;
}
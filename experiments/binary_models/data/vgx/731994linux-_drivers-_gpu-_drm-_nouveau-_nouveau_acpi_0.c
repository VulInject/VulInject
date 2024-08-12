void *
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
int VAR7, VAR8;
void *VAR9;

switch (VAR4->VAR10) {
case VAR11:
case VAR12:
VAR7 = VAR13;
break;
default:
return NULL;
}

VAR6 = FUN2(VAR2->VAR2);
if (!VAR6)
return NULL;

VAR8 = FUN3(VAR6, VAR7, -1, &VAR9);
if (VAR8 < 0)
return NULL;

return FUN4(VAR9, VAR14, VAR15);
}
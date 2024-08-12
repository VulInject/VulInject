static inline int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = VAR4->VAR7;
int VAR8;

if (!VAR4->VAR7)
return -VAR9;

VAR4->VAR10 = NULL;
VAR4->VAR11 = NULL;

for (VAR8 = 0; VAR8 < VAR6->VAR12->VAR13.VAR14; VAR8++) {
struct VAR15 *VAR16;

VAR16 = &VAR6->VAR12->VAR17[VAR8].VAR13;

if (!VAR4->VAR10 && FUN3(VAR16)) {
VAR4->VAR10 = VAR16;
continue;
}

if (!VAR4->VAR11 && FUN4(VAR16)) {
VAR4->VAR11 = VAR16;
continue;
}
}

if (!VAR4->VAR10 || !VAR4->VAR11) {
FUN5(VAR2, "");
return -VAR9;
}

return 0;
}
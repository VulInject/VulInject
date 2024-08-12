static struct VAR1 *
FUN1(struct VAR2 *VAR3,
u32 VAR4, VAR5 *VAR6,
bool VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR3);
struct VAR10 *VAR11;
struct VAR1 *VAR12;
u32 VAR13;


for (VAR13 = VAR4; VAR13 < VAR9->VAR14; VAR13++) {
VAR11 = FUN3(VAR3, VAR13);
VAR12 = FUN4(VAR3, VAR11, false);
if (!VAR12)
continue;

if (VAR7 &&
FUN5(&VAR11->VAR15->VAR16))
continue;

*VAR6 = VAR13;
return VAR12;
}

return NULL;
}
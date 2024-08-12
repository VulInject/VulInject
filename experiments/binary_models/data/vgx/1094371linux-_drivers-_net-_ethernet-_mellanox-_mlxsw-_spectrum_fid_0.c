static int FUN1(struct VAR1 *VAR1,
const struct VAR2 *VAR3)
{
u16 VAR4 = VAR3->VAR5 - VAR3->VAR6 + 1;
struct VAR2 *VAR7;
int VAR8;

VAR7 = FUN2(VAR3, sizeof(*VAR7), VAR9);
if (!VAR7)
return -VAR10;

VAR7->VAR1 = VAR1;
FUN3(&VAR7->VAR11);
VAR7->VAR12 = FUN4(VAR4, VAR9);
if (!VAR7->VAR12) {
VAR8 = -VAR10;
goto VAR13;
}

if (VAR7->VAR14) {
VAR8 = FUN5(VAR7);
if (VAR8)
goto VAR15;
}

VAR1->VAR16->VAR17[VAR3->VAR18] = VAR7;

return 0;

VAR15:
FUN6(VAR7->VAR12);
VAR13:
FUN7(VAR7);
return VAR8;
}
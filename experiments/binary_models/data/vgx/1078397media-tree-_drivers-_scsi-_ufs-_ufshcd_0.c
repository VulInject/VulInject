int FUN1(struct VAR1 *VAR2, struct VAR3 **VAR4)
{
struct VAR5 *VAR6;
struct VAR3 *VAR7;
int VAR8 = 0;

if (!VAR2) {
FUN2(VAR2,
"");
VAR8 = -VAR9;
goto VAR10;
}

VAR6 = FUN3(&VAR11,
sizeof(struct VAR3));
if (!VAR6) {
FUN2(VAR2, "");
VAR8 = -VAR12;
goto VAR10;
}
VAR7 = FUN4(VAR6);
VAR7->VAR6 = VAR6;
VAR7->VAR2 = VAR2;
*VAR4 = VAR7;

VAR10:
return VAR8;
}
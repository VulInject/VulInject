FUN1(
VAR1,
VAR2,
VAR3,
VAR4,
VAR5);

static int FUN2(VAR6 *VAR7, const VAR2 *VAR8, VAR2 **VAR9) {
VAR2 *VAR10;

assert(VAR7);
assert(VAR8);

VAR10 = FUN3(VAR7->VAR11, VAR8);
if (!VAR10)
return -VAR12;

if (VAR9)
*VAR9 = VAR10;
return 0;
}
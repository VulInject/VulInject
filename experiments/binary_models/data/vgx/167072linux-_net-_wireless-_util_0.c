bool FUN1(struct VAR1 *VAR2, bool VAR3)
{
int VAR4 = 0, VAR5, VAR6, VAR7;

for (VAR4 = 0; VAR4 < VAR2->VAR8; VAR4 += VAR6 + VAR7) {
struct {
__be16 VAR8;
u8 VAR9;
} VAR10;
u16 VAR8;

if (FUN2(VAR2, VAR4 + 2 * VAR11, &VAR10, sizeof(VAR10)) < 0)
return false;

if (VAR3)
VAR8 = FUN3(*(VAR12 *)&VAR10.VAR8) +
FUN4(VAR10.VAR9);
else
VAR8 = FUN5(VAR10.VAR8);

VAR6 = sizeof(struct VAR13) + VAR8;
VAR7 = (4 - VAR6) & 0x3;
VAR5 = VAR2->VAR8 - VAR4;

if (VAR6 > VAR5)
return false;
}

return true;
}
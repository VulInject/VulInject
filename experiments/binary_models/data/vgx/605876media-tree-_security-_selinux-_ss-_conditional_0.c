static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, struct VAR5 *VAR6)
{
__le32 VAR7[1];
struct VAR3 *VAR8;
u32 VAR9;
int VAR10;

VAR9 = 0;
for (VAR8 = VAR4; VAR8 != NULL; VAR8 = VAR8->VAR11)
VAR9++;

VAR7[0] = FUN2(VAR9);
VAR10 = FUN3(VAR7, sizeof(VAR12), 1, VAR6);
if (VAR10)
return VAR10;

if (VAR9 == 0)
return 0;

for (VAR8 = VAR4; VAR8 != NULL; VAR8 = VAR8->VAR11) {
VAR10 = FUN4(VAR2, VAR8->VAR13, VAR6);
if (VAR10)
return VAR10;
}

return 0;
}
static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5, VAR6;
u32 VAR7;

if (FUN3(VAR2)) {
VAR6 = FUN4(VAR2);
if (VAR6)
return VAR6;
}

for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++) {
VAR7 = FUN5(VAR4, VAR5, VAR9);
VAR4->VAR10[VAR5] = VAR7;
}

VAR4->VAR11 = FUN6(VAR4, VAR12);

FUN7(VAR2);

return 0;
}
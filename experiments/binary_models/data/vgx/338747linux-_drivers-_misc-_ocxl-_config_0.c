static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
int VAR7, VAR8;
u32 VAR9, *VAR10;

FUN2(VAR11 < VAR12);
for (VAR7 = 0; VAR7 < VAR12; VAR7 += 4) {
VAR8 = FUN3(VAR2, VAR4, VAR13 + VAR7, &VAR9);
if (VAR8)
return VAR8;
VAR10 = (VAR14 *) &VAR6->VAR15[VAR7];
*VAR10 = FUN4((__force VAR16) VAR9);
}
VAR6->VAR15[VAR11 - 1] = ''; 
return 0;
}
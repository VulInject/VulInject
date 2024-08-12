static int FUN1(struct VAR1 *VAR2)
{
struct tc35815_regs VAR3 *VAR4 =
(struct tc35815_regs VAR3 *)VAR2->VAR5;
int VAR6;

while (FUN2(&VAR4->VAR7) & VAR8)
;
for (VAR6 = 0; VAR6 < 6; VAR6 += 2) {
unsigned short VAR9;
FUN3(VAR8 | VAR10 | (VAR6 / 2 + 2), &VAR4->VAR7);
while (FUN2(&VAR4->VAR7) & VAR8)
;
VAR9 = FUN2(&VAR4->VAR11);
VAR2->VAR12[VAR6] = VAR9 & 0xff;
VAR2->VAR12[VAR6+1] = VAR9 >> 8;
}
if (!FUN4(VAR2->VAR12))
return FUN5(VAR2);
return 0;
}
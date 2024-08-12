static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;
u32 VAR5 = 0;

FUN2(VAR6, &VAR4->VAR7);
FUN3(9900, 10000);

while (VAR5 < VAR8) {
if (!FUN4(VAR9, &VAR4->VAR7) &&
!FUN4(VAR10, &VAR4->VAR7))
return;

FUN3(9900, 10000);
VAR5++;
}
}
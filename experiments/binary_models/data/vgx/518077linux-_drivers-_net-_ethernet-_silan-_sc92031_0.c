static void FUN1(struct VAR1 *VAR2,
u32 VAR3, unsigned VAR4)
{
if(VAR4 > (VAR5 + 4) || VAR4 < 16) {
VAR2->VAR6.VAR7++;
VAR2->VAR6.VAR8++;
}

if (!(VAR3 & VAR9)) {
VAR2->VAR6.VAR7++;

if (VAR3 & (VAR10 | VAR11))
VAR2->VAR6.VAR8++;

if (VAR3 & VAR12)
VAR2->VAR6.VAR13++;

if (!(VAR3 & VAR14))
VAR2->VAR6.VAR15++;
} else {
struct VAR16 *VAR17 = FUN2(VAR2);
VAR17->VAR18++;
}
}
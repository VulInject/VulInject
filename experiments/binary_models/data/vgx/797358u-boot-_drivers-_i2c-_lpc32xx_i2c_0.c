static int FUN1(struct VAR1 *VAR2, u8 VAR3, uint VAR4,
int VAR5, VAR6 *VAR7, int VAR8)
{
int VAR9;


FUN2(VAR10, &VAR2->VAR11);
while (FUN3(&VAR2->VAR11) & VAR10)
;

if (VAR5 | VAR8)

FUN2((VAR3<<1) | VAR12, &VAR2->VAR13);
else
return 0;

while (VAR5) {

VAR9 = FUN3(&VAR2->VAR9);
if (!(VAR9 & VAR14)) {
VAR5--;
int VAR15 = (VAR4 >> (8 * VAR5)) & 0xff;
if (!(VAR5 | VAR8))
VAR15 |= VAR16;

FUN2(VAR15, &VAR2->VAR13);
}
}
while (VAR8) {

VAR9 = FUN3(&VAR2->VAR9);
if (!(VAR9 & VAR14)) {

VAR8--;
int VAR17 = *(VAR7++);
if (!VAR8)
VAR17 |= VAR16;

FUN2(VAR17, &VAR2->VAR13);
}
}

while (!((VAR9 = FUN3(&VAR2->VAR9)) & VAR18))
;

FUN2(1, &VAR2->VAR9);
return 0;
}
static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
const VAR5 *VAR6 = VAR4->VAR7;
int VAR8 = VAR4->VAR9, VAR10 = sizeof(VAR11), VAR12;
__le32 VAR13;
u32 VAR14;

while (VAR8) {
if (VAR8 < VAR10) {
VAR13 = 0;
memcpy(&VAR13, VAR6, VAR8);
FUN2(VAR2, VAR15, FUN3(VAR13));
VAR8 = 0;
} else {
memcpy(&VAR13, VAR6, VAR10);
FUN2(VAR2, VAR15, FUN3(VAR13));
VAR6 += VAR10;
VAR8 -= VAR10;
}

VAR12 = FUN4(VAR2->VAR16 + VAR17,
VAR14, !(VAR14 & VAR18),
VAR19);
if (VAR12) {
FUN5(VAR2->VAR20.VAR21,
"");
return VAR12;
}
}

VAR13 = 0;
memcpy(&VAR13, VAR4->VAR22, sizeof(VAR4->VAR22));
return FUN6(VAR2, FUN3(VAR13));
}
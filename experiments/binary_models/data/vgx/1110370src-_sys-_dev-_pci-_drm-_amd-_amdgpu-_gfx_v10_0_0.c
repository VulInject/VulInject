static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
int VAR7;
u8 VAR8, VAR9, VAR10;
struct VAR11 *VAR12;
uint32_t VAR13 = VAR6->VAR14[0];

FUN2("");

if (VAR2->VAR15 && (VAR13 & VAR16)) {
struct VAR17 *VAR18;

VAR13 &= VAR19;

FUN3(&VAR2->VAR20.VAR21);
VAR18 = FUN4(&VAR2->VAR20.VAR22, VAR13);
if (VAR18) {
FUN2("", VAR13);
FUN5(VAR18->VAR12);
}
FUN6(&VAR2->VAR20.VAR21);
} else {
VAR8 = (VAR6->VAR23 & 0x0c) >> 2;
VAR9 = (VAR6->VAR23 & 0x03) >> 0;
VAR10 = (VAR6->VAR23 & 0x70) >> 4;

switch (VAR8) {
case 0:
if (VAR9 == 0)
FUN5(&VAR2->VAR24.VAR25[0]);
else
FUN5(&VAR2->VAR24.VAR25[1]);
break;
case 1:
case 2:
for (VAR7 = 0; VAR7 < VAR2->VAR24.VAR26; VAR7++) {
VAR12 = &VAR2->VAR24.VAR27[VAR7];

if ((VAR12->VAR28 == VAR8) &&
(VAR12->VAR29 == VAR9) &&
(VAR12->VAR18 == VAR10))
FUN5(VAR12);
}
break;
}
}

return 0;
}
int FUN1(struct VAR1 *VAR2,
u16 VAR3,
void *VAR4,
u32 VAR5,
VAR6 *VAR7)
{
struct VAR8 *VAR9;
struct VAR10 *VAR10;
struct VAR11 *VAR11;
int VAR12;
struct VAR13 *VAR14;

if (!FUN2(VAR2)) {
*VAR7 = VAR15;
return 0;
}

VAR16:
FUN3();
VAR9 = FUN4(VAR2->VAR9);
VAR10 = &VAR9->VAR10;
VAR11 = VAR9->VAR11;

switch (VAR3) {
case VAR17: {
u32 VAR18;

VAR12 = -VAR19;
if (VAR5 != sizeof(VAR6))
goto VAR20;

VAR18 = *((VAR6 *)VAR4);

VAR14 = VAR10->VAR21[VAR22];
while (VAR14) {
if (VAR14->VAR23.VAR24.VAR18 == (VAR18 & VAR14->VAR23.VAR24.VAR25))
break;
VAR14 = VAR14->VAR26;
}
break;
}

case VAR27:
VAR12 = -VAR19;
if (VAR5 != sizeof(VAR28) * 2)
goto VAR20;
VAR14 = VAR10->VAR21[VAR29];
while (VAR14) {
if (FUN5(VAR4, VAR14->VAR23.VAR30.VAR18,
VAR14->VAR23.VAR30.VAR25))
break;
VAR14 = VAR14->VAR26;
}
break;

default:
VAR12 = 0;
*VAR7 = VAR15;
goto VAR20;
}

if (VAR14) {
VAR12 = FUN6(VAR11, VAR14, 0, VAR7);
if (VAR12 == -VAR31) {
FUN7();
goto VAR16;
}
if (VAR12)
goto VAR20;
} else {
*VAR7 = VAR15;
}

VAR12 = 0;
VAR20:
FUN7();
return VAR12;
}
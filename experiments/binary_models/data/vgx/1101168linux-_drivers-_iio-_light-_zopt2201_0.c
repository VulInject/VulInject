static int FUN1(struct VAR1 *VAR2, u8 VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR5;
int VAR6 = 10;
u8 VAR7[3];
int VAR8;

FUN2(&VAR2->VAR9);
VAR8 = FUN3(VAR2, VAR3 == VAR10);
if (VAR8 < 0)
goto VAR11;

while (VAR6--) {
unsigned long VAR12 = VAR13[VAR2->VAR14].VAR15;

if (VAR12 <= 20000)
FUN4(VAR12, VAR12 + 1000);
else
FUN5(VAR12 / 1000);
VAR8 = FUN6(VAR5, VAR16);
if (VAR8 < 0)
goto VAR11;
if (VAR8 & VAR17)
break;
}

if (VAR6 < 0) {
VAR8 = -VAR18;
goto VAR11;
}

VAR8 = FUN7(VAR5, VAR3, sizeof(VAR7), VAR7);
if (VAR8 < 0)
goto VAR11;

VAR8 = FUN8(VAR5, VAR19, 0x00);
if (VAR8 < 0)
goto VAR11;
FUN9(&VAR2->VAR9);

return FUN10(&VAR7[0]);

VAR11:
FUN9(&VAR2->VAR9);
return VAR8;
}
static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2->VAR7.VAR8);
bool VAR9, VAR10;
bool VAR11, VAR12, VAR13;
unsigned long long VAR14;
int VAR15, VAR16, VAR17;


VAR16 = FUN3(&VAR2->VAR7, 48);
if (VAR16 < 0)
return VAR16;
FUN4(500, 1000); 


VAR16 = FUN5(&VAR2->VAR7, VAR18, 1, &VAR17);
if (VAR16)
return VAR16;

VAR17 &= VAR19;

if (VAR17 != VAR2->VAR20->VAR21)
FUN6(&VAR2->VAR7.VAR8->VAR22, "",
VAR17);

VAR2->VAR23 = FUN7(VAR24) |
FUN8(VAR2->VAR25) |
FUN9(480);

VAR2->VAR26 = FUN10(0);

VAR9 = FUN11(VAR4, "");
if (VAR9)
VAR2->VAR23 |= VAR27;

VAR10 = FUN11(VAR4, "");
if (VAR10 && VAR2->VAR20->VAR21 != VAR28)
VAR2->VAR26 |= VAR29;

VAR2->VAR26 &= ~VAR30;
VAR2->VAR31 = VAR32;

VAR11 = FUN11(VAR4, "");
if (VAR11)
VAR2->VAR26 |= VAR33;

VAR12 = FUN11(VAR4, "");
if (!VAR12)
VAR2->VAR26 |= VAR34;

VAR13 = FUN11(VAR4,
"");
if (VAR13 && VAR11) {
VAR2->VAR26 |= VAR35;
} else if (VAR13) {
FUN6(&VAR2->VAR7.VAR8->VAR22,
"");
}

VAR16 = FUN12(&VAR2->VAR7, VAR36, 3, VAR2->VAR23);
if (VAR16)
return VAR16;

VAR16 = FUN12(&VAR2->VAR7, VAR37, 3, VAR2->VAR26);
if (VAR16)
return VAR16;

VAR16 = FUN13(VAR2);
if (VAR16)
return VAR16;


for (VAR15 = 0; VAR15 < FUN14(VAR2->VAR38); VAR15++) {
VAR14 = ((VAR39)VAR2->VAR40 * 100000000)
>> (VAR6->VAR41[0].VAR42.VAR43 -
((VAR2->VAR26 & VAR34) ? 0 : 1));
VAR14 >>= VAR15;

VAR2->VAR38[VAR15][1] = FUN15(VAR14, 100000000) * 10;
VAR2->VAR38[VAR15][0] = VAR14;
}

return 0;
}
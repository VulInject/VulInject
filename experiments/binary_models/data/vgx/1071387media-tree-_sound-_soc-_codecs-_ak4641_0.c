static int FUN1(struct VAR1 *VAR2,
enum snd_soc_bias_level VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = VAR2->VAR8->VAR9;
int VAR10;

switch (VAR3) {
case VAR11:

FUN3(VAR2, VAR12, 0x20, 0);
break;
case VAR13:

FUN3(VAR2, VAR12, 0x20, 0x20);
break;
case VAR14:
if (FUN4(VAR2) == VAR15) {
if (VAR7 && FUN5(VAR7->VAR16))
FUN6(VAR7->VAR16, 1);
FUN7(1);
if (VAR7 && FUN5(VAR7->VAR17))
FUN6(VAR7->VAR17, 1);
FUN7(1);

VAR10 = FUN8(VAR5->VAR18);
if (VAR10) {
FUN9(VAR2->VAR8,
"", VAR10);
return VAR10;
}
}
FUN3(VAR2, VAR19, 0x80, 0x80);
FUN3(VAR2, VAR20, 0x80, 0);
break;
case VAR15:
FUN3(VAR2, VAR19, 0x80, 0);
if (VAR7 && FUN5(VAR7->VAR17))
FUN6(VAR7->VAR17, 0);
if (VAR7 && FUN5(VAR7->VAR16))
FUN6(VAR7->VAR16, 0);
FUN10(VAR5->VAR18);
break;
}
return 0;
}
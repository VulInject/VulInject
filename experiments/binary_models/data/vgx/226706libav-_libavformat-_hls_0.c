static int FUN1(VAR1 *VAR2, int VAR3,
int64_t VAR4, int VAR5)
{
VAR6 *VAR7 = VAR2->VAR8;
int VAR9, VAR10, VAR11;

if ((VAR5 & VAR12) || !VAR7->VAR13[0]->VAR14)
return FUN2(VAR15);

VAR7->VAR16     = VAR5;
VAR7->VAR17 = VAR3 < 0 ? VAR4 :
FUN3(VAR4, VAR18,
VAR2->VAR19[VAR3]->VAR20.VAR21,
VAR5 & VAR22 ?
VAR23 : VAR24);
VAR4 = FUN3(VAR4, VAR18, VAR3 >= 0 ?
VAR2->VAR19[VAR3]->VAR20.VAR21 :
VAR18, VAR5 & VAR22 ?
VAR23 : VAR24);
if (VAR2->VAR25 < VAR7->VAR17) {
VAR7->VAR17 = VAR26;
return FUN2(VAR27);
}

VAR11 = FUN2(VAR27);
for (VAR9 = 0; VAR9 < VAR7->VAR28; VAR9++) {

struct VAR29 *VAR30 = VAR7->VAR13[VAR9];
int64_t VAR31 = VAR7->VAR32 == VAR26 ?
0 : VAR7->VAR32;
if (VAR30->VAR33)
FUN4(VAR2, &VAR30->VAR33);
FUN5(&VAR30->VAR34);
FUN6(&VAR30->VAR34);
VAR30->VAR35.VAR36 = 0;

VAR30->VAR35.VAR37 = VAR30->VAR35.VAR38 = VAR30->VAR35.VAR39;

VAR30->VAR35.VAR31 = 0;


for (VAR10 = 0; VAR10 < VAR30->VAR40; VAR10++) {
if (VAR4 >= VAR31 &&
VAR4 < VAR31 + VAR30->VAR41[VAR10]->VAR25) {
VAR30->VAR42 = VAR30->VAR43 + VAR10;
VAR11 = 0;
break;
}
VAR31 += VAR30->VAR41[VAR10]->VAR25;
}
if (VAR11)
VAR7->VAR17 = VAR26;
}
return VAR11;
}
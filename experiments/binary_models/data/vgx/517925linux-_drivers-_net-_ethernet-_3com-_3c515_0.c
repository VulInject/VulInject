static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5 = VAR4->VAR6 % VAR7;
int VAR8 = VAR2->VAR9;
int VAR10;

if (VAR11 > 5)
FUN3("",
FUN4(VAR8 + VAR12), FUN4(VAR8 + VAR13));
while ((VAR10 = VAR4->VAR14[VAR5].VAR15) & VAR16) {
if (VAR10 & VAR17) {	
unsigned char VAR18 = VAR10 >> 16;
if (VAR11 > 2)
FUN3("",
VAR18);
VAR2->VAR19.VAR20++;
if (VAR18 & 0x01)
VAR2->VAR19.VAR21++;
if (VAR18 & 0x02)
VAR2->VAR19.VAR22++;
if (VAR18 & 0x04)
VAR2->VAR19.VAR23++;
if (VAR18 & 0x08)
VAR2->VAR19.VAR24++;
if (VAR18 & 0x10)
VAR2->VAR19.VAR22++;
} else {

short VAR25 = VAR10 & 0x1fff;
struct VAR26 *VAR27;

VAR2->VAR19.VAR28 += VAR25;
if (VAR11 > 4)
FUN3("",
VAR25, VAR10);


if (VAR25 < VAR29 &&
(VAR27 = FUN5(VAR2, VAR25 + 4)) != NULL) {
FUN6(VAR27, 2);	

FUN7(VAR27,
FUN8(VAR4->VAR14[VAR5].VAR30),
VAR25);
VAR31++;
} else {
void *VAR32;

VAR27 = VAR4->VAR33[VAR5];
VAR4->VAR33[VAR5] = NULL;
VAR32 = FUN9(VAR27, VAR25);

if (FUN8(VAR4->VAR14[VAR5].VAR30) != VAR32)
FUN10("",
VAR2->VAR34,
FUN8(VAR4->VAR14[VAR5].VAR30),
VAR27->VAR35, VAR32);
VAR36++;
}
VAR27->VAR37 = FUN11(VAR27, VAR2);
FUN12(VAR27);
VAR2->VAR19.VAR38++;
}
VAR5 = (++VAR4->VAR6) % VAR7;
}

for (; VAR4->VAR6 - VAR4->VAR39 > 0; VAR4->VAR39++) {
struct VAR26 *VAR27;
VAR5 = VAR4->VAR39 % VAR7;
if (VAR4->VAR33[VAR5] == NULL) {
VAR27 = FUN5(VAR2, VAR40);
if (VAR27 == NULL)
break;	
FUN6(VAR27, 2);	
VAR4->VAR14[VAR5].VAR30 = FUN13(VAR27->VAR41);
VAR4->VAR33[VAR5] = VAR27;
}
VAR4->VAR14[VAR5].VAR15 = 0;	
}
return 0;
}
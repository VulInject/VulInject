static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
void VAR5 *VAR6 = VAR4->VAR7;
int VAR8;

FUN3(VAR2);

FUN4(&VAR4->VAR9);

if (VAR10 > 1) {
FUN5(VAR11 "",
VAR2->VAR12, (int) FUN6(VAR6 + VAR13));
FUN5(VAR11 "",
VAR2->VAR12, VAR4->VAR14, VAR4->VAR15,
VAR4->VAR16, VAR4->VAR17);
}


FUN7(0, VAR6 + VAR18);


FUN7(0, VAR6 + VAR19);
FUN6(VAR6 + VAR19);

if (VAR10 > 5) {
FUN5(VAR11"",
(long long) VAR4->VAR20);
for (VAR8 = 0; VAR8 < 8 ; VAR8++)
FUN5(VAR11 "",
VAR8, FUN8(VAR4->VAR21[VAR8].VAR22),
(long long) FUN9(VAR4->VAR21[VAR8].VAR23),
FUN8(VAR4->VAR24[VAR8].VAR22));
FUN5(VAR11 "",
(long long) VAR4->VAR25, VAR4->VAR26);
if (VAR4->VAR26)
for (VAR8 = 0; VAR8 < 8 ; VAR8++) {
FUN5(VAR11 "",
VAR8, (long long) FUN9(VAR4->VAR27[VAR8].VAR28), FUN8(VAR4->VAR26[VAR8].VAR22));
}
}

FUN10(VAR4->VAR29->VAR30, VAR2);


for (VAR8 = 0; VAR8 < VAR31; VAR8++) {
VAR4->VAR27[VAR8].VAR28 = FUN11(0xBADF00D0); 
if (VAR4->VAR32[VAR8].VAR33 != NULL) {
FUN12(VAR4->VAR29, VAR4->VAR32[VAR8].VAR34, VAR4->VAR35, VAR36);
FUN13(VAR4->VAR32[VAR8].VAR33);
}
VAR4->VAR32[VAR8].VAR33 = NULL;
VAR4->VAR32[VAR8].VAR34 = 0;
}
for (VAR8 = 0; VAR8 < VAR37; VAR8++) {
struct VAR38 *VAR33 = VAR4->VAR39[VAR8].VAR33;
if (VAR33 == NULL)
continue;
FUN12(VAR4->VAR29,
VAR4->VAR39[VAR8].VAR34,
FUN14(VAR33), VAR40);
VAR4->VAR39[VAR8].VAR34 = 0;
FUN13(VAR33);
VAR4->VAR39[VAR8].VAR33 = NULL;
}

return 0;
}
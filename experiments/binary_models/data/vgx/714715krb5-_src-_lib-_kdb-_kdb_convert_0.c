void
FUN1(VAR1 *VAR2, int VAR3)
{

VAR1 *VAR4;
unsigned int VAR5, VAR6;
int VAR7, VAR8;

if (VAR2 == NULL)
return;

VAR4 = VAR2;


for (VAR8 = 0; VAR8 < VAR3; VAR8++) {


free(VAR4->VAR9.VAR10);




if (VAR4->VAR11.VAR12) {
for (VAR5 = 0; VAR5 < VAR4->VAR11.VAR13; VAR5++)
free(VAR4->VAR11.VAR12[VAR5].VAR10);
free(VAR4->VAR11.VAR12);
}


free(VAR4->VAR14.VAR15);


if (VAR4->VAR16.VAR17) {

for (VAR5 = 0; VAR5 < VAR4->VAR16.VAR18; VAR5++) {


if ((FUN2(VAR4, VAR5).VAR19 == VAR20) && FUN3(VAR4, VAR5).VAR21.VAR22) {

for (VAR6 = 0; VAR6 < FUN3(VAR4, VAR5).VAR21.VAR23; VAR6++) {
free(FUN4(VAR4, VAR5, VAR6).VAR24.VAR25);
if (FUN4(VAR4, VAR5, VAR6).VAR26.VAR27) {
for (VAR7 = 0; VAR7 < FUN4(VAR4, VAR5, VAR6).VAR28; VAR7++) {
free(FUN4(VAR4, VAR5, VAR6).VAR26.VAR27[VAR7].VAR10);
}
free(FUN4(VAR4, VAR5, VAR6).VAR26.VAR27);
}
}
free(FUN3(VAR4, VAR5).VAR21.VAR22);
}



if ((FUN2(VAR4, VAR5).VAR19 == VAR29) && FUN3(VAR4, VAR5).VAR30.VAR31) {
for (VAR6 = 0; VAR6 < FUN3(VAR4, VAR5).VAR30.VAR32; VAR6++) {
free(FUN3(VAR4, VAR5).VAR30.VAR31[VAR6].VAR33.VAR34);
}
free(FUN3(VAR4, VAR5).VAR30.VAR31);
}


if (FUN2(VAR4, VAR5).VAR19 == VAR35) {
free(FUN3(VAR4, VAR5).VAR36.VAR37.VAR10);
if (FUN3(VAR4, VAR5).VAR36.VAR38.VAR39) {
for (VAR6 = 0; VAR6 < FUN3(VAR4, VAR5).VAR36.VAR38.VAR40; VAR6++) {
free(FUN5(VAR4, VAR5, VAR6).VAR41.VAR10);
}
free(FUN3(VAR4, VAR5).VAR36.VAR38.VAR39);
}
}


if (FUN2(VAR4, VAR5).VAR19 == VAR42) {
free(FUN3(VAR4, VAR5).VAR43.VAR37.VAR10);
if (FUN3(VAR4, VAR5).VAR43.VAR38.VAR39) {
for (VAR6 = 0; VAR6 < FUN3(VAR4, VAR5).VAR43.VAR38.VAR40; VAR6++) {
free(FUN6(VAR4, VAR5, VAR6).VAR41.VAR10);
}
free(FUN3(VAR4, VAR5).VAR43.VAR38.VAR39);
}
}


if ((FUN2(VAR4, VAR5).VAR19 == VAR44) && FUN3(VAR4, VAR5).VAR45.VAR10)
free(FUN3(VAR4, VAR5).VAR45.VAR10);


if ((FUN2(VAR4, VAR5).VAR19 == VAR46) && FUN3(VAR4, VAR5).VAR47.VAR10)
free(FUN3(VAR4, VAR5).VAR47.VAR10);


if ((FUN2(VAR4, VAR5).VAR19 == VAR48) && FUN3(VAR4, VAR5).VAR49.VAR50)
free(FUN3(VAR4, VAR5).VAR49.VAR50);

}


free(VAR4->VAR16.VAR17);
}




VAR4++;
}



free(VAR2);
}
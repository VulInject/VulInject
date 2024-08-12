VAR1
FUN1(struct VAR2 *VAR3, bus_dma_tag_t VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8 = NULL;
struct VAR9 *VAR10;
struct VAR11 *VAR12;
struct VAR13 *VAR14;
struct VAR15 *VAR16;
struct VAR2 *VAR17;
uint32_t VAR18, VAR19;
int VAR20;


FUN2(VAR16, &VAR21->VAR22, VAR23) {
VAR6 = VAR16->VAR24;
if (FUN3(VAR6->VAR25, VAR26,
sizeof(VAR6->VAR25)) == 0) {
VAR8 = VAR16->VAR24;
break;
}
}
if (VAR8 == NULL)
return VAR4;


VAR19 = VAR8->VAR19;
for (VAR20 = 0; VAR20 < VAR8->VAR27; VAR20++) {
VAR10 = (struct VAR9 *)((char *)VAR8 + VAR19);
if (VAR10->VAR28 == VAR29) {
VAR14 = (struct VAR13 *)&VAR10[1];
VAR17 = FUN4(VAR21->VAR30,
VAR14->VAR31);
if (VAR17 == VAR3)
break;
}
VAR19 += VAR10->VAR32;
}


if (VAR20 >= VAR8->VAR27)
return VAR4;


VAR12 = (struct VAR11 *)((char *)VAR10 + VAR10->VAR33);
for (VAR20 = 0; VAR20 < VAR10->VAR34; VAR20++) {
VAR19 = VAR12[VAR20].VAR35;

if (VAR12[VAR20].VAR36 & VAR37) {
VAR18 = VAR12[VAR20].VAR38;
break;
}
}


if (VAR20 >= VAR10->VAR34 && VAR10->VAR34 == 1) {
VAR20 = 0;
VAR18 = VAR12[VAR20].VAR38;
}


if (VAR20 >= VAR10->VAR34)
return VAR4;

VAR10 = (struct VAR9 *)((char *)VAR8 + VAR19);
if (VAR10->VAR28 == VAR39 || VAR10->VAR28 == VAR40)
return FUN5(VAR10, VAR18, VAR4);

return VAR4;
}
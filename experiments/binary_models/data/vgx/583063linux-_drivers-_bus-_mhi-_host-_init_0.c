int FUN1(struct VAR1 *VAR2)
{
u32 VAR3;
int VAR4, VAR5;
struct VAR6 *VAR6;
struct VAR7 *VAR7;
void VAR8 *VAR9 = VAR2->VAR10;
struct VAR11 *VAR12 = &VAR2->VAR13->VAR12;
struct {
u32 VAR14;
u32 VAR3;
} VAR15[] = {
{
VAR16,
FUN2(VAR2->VAR17->VAR18),
},
{
VAR19,
FUN3(VAR2->VAR17->VAR18),
},
{
VAR20,
FUN2(VAR2->VAR17->VAR21),
},
{
VAR22,
FUN3(VAR2->VAR17->VAR21),
},
{
VAR23,
FUN2(VAR2->VAR17->VAR24),
},
{
VAR25,
FUN3(VAR2->VAR17->VAR24),
},
{
VAR26,
FUN2(VAR2->VAR27),
},
{
VAR28,
FUN3(VAR2->VAR27),
},
{
VAR29,
FUN2(VAR2->VAR27),
},
{
VAR30,
FUN3(VAR2->VAR27),
},
{
VAR31,
FUN2(VAR2->VAR32),
},
{
VAR33,
FUN3(VAR2->VAR32),
},
{
VAR34,
FUN2(VAR2->VAR32),
},
{
VAR35,
FUN3(VAR2->VAR32),
},
{0, 0}
};

FUN4(VAR12, "");


VAR5 = FUN5(VAR2, VAR9, VAR36, &VAR3);
if (VAR5) {
FUN6(VAR12, "");
return -VAR37;
}


VAR2->VAR38 = VAR9 + VAR3 + (8 * VAR39);
VAR2->VAR40 = false;


VAR6 = VAR2->VAR6;
for (VAR4 = 0; VAR4 < VAR2->VAR41; VAR4++, VAR3 += 8, VAR6++)
VAR6->VAR42.VAR43 = VAR9 + VAR3;


VAR5 = FUN5(VAR2, VAR9, VAR44, &VAR3);
if (VAR5) {
FUN6(VAR12, "");
return -VAR37;
}


VAR7 = VAR2->VAR7;
for (VAR4 = 0; VAR4 < VAR2->VAR45; VAR4++, VAR3 += 8, VAR7++) {
if (VAR7->VAR46)
continue;

VAR7->VAR47.VAR43 = VAR9 + VAR3;
}


VAR2->VAR48[VAR49].VAR47.VAR43 = VAR9 + VAR50;


for (VAR4 = 0; VAR15[VAR4].VAR14; VAR4++)
FUN7(VAR2, VAR9, VAR15[VAR4].VAR14,
VAR15[VAR4].VAR3);

VAR5 = FUN8(VAR2, VAR9, VAR51, VAR52,
VAR2->VAR45);
if (VAR5) {
FUN6(VAR12, "");
return VAR5;
}

VAR5 = FUN8(VAR2, VAR9, VAR51, VAR53,
VAR2->VAR54);
if (VAR5) {
FUN6(VAR12, "");
return VAR5;
}

return 0;
}
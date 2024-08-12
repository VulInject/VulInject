int FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5) {
FUN2(VAR6) VAR7 *VAR8 = NULL;
_cleanup_free_ char *VAR9 = NULL;
VAR10 *VAR11, *VAR12;
int VAR13, VAR14;

assert(VAR2);
assert(VAR4);

if (VAR4->VAR15 != VAR16)
return 0;

VAR8 = FUN3(VAR7, 1);
if (!VAR8)
return -VAR17;

VAR13 = FUN4(VAR4, VAR5, VAR18, VAR8, &VAR9);
if (VAR13 < 0)
return 0;

VAR14 = FUN5(VAR2, VAR8, VAR4);
if (VAR14 < 0)
return VAR14;

VAR14 = FUN6(VAR2);
if (VAR14 < 0)
return VAR14;

VAR11 = FUN7(VAR2->VAR19, &VAR8->VAR20);
VAR12 = FUN7(VAR2->VAR21, &VAR8->VAR20);

switch (VAR13) {

case VAR22: {
be32_t VAR23 = VAR24;

FUN8(VAR2, "", FUN9(VAR8->VAR4->VAR25));

if (VAR2->VAR26 == 0)

return 0;


if (VAR12)
VAR23 = VAR12->VAR23;
else if (VAR11)
VAR23 = VAR11->VAR23;
else {
struct siphash VAR27;
uint64_t VAR28;



FUN10(&VAR27, VAR29.VAR30);
FUN11(&VAR8->VAR20, &VAR27);
VAR28 = FUN12(FUN13(&VAR27));

for (unsigned VAR31 = 0; VAR31 < VAR2->VAR26; VAR31++) {
be32_t VAR32;

VAR32 = VAR2->VAR33 | FUN14(VAR2->VAR34 + (VAR28 + VAR31) % VAR2->VAR26);
if (FUN15(VAR2, VAR32)) {
VAR23 = VAR32;
break;
}
}
}

if (VAR23 == VAR24)

return 0;

VAR14 = FUN16(VAR2, VAR8, VAR23, VAR35);
if (VAR14 < 0)

return FUN17(VAR2, VAR14, "");

FUN8(VAR2, "", FUN9(VAR8->VAR4->VAR25));
return VAR35;
}
case VAR36:
FUN8(VAR2, "", FUN9(VAR8->VAR4->VAR25), FUN18(VAR9));



return 1;

case VAR37: {
be32_t VAR23;
bool VAR38 = false;



if (VAR8->VAR39 != 0) {
FUN8(VAR2, "",
FUN9(VAR8->VAR4->VAR25));


if (VAR8->VAR39 != VAR2->VAR23)

return 0;

if (VAR8->VAR4->VAR40 != 0)

return 0;

if (VAR8->VAR41 == 0)

return 0;

VAR23 = VAR8->VAR41;
} else if (VAR8->VAR41 != 0) {
FUN8(VAR2, "",
FUN9(VAR8->VAR4->VAR25));


if (VAR8->VAR4->VAR40 != 0)

return 0;


VAR23 = VAR8->VAR41;
VAR38 = true;
} else {
FUN8(VAR2, "",
FUN9(VAR8->VAR4->VAR25));


if (VAR8->VAR4->VAR40 == 0)

return 0;

VAR23 = VAR8->VAR4->VAR40;
}


if (VAR23 == VAR2->VAR23)
return 0;

if (VAR12) {


if (VAR12->VAR23 != VAR23)

return FUN19(VAR2, VAR38, VAR8);

return FUN20(VAR2, VAR8, VAR11, VAR23);
}

if (FUN21(VAR2, VAR23)) {


if (VAR11 && VAR11->VAR23 != VAR23)

return FUN19(VAR2, VAR38, VAR8);

return FUN20(VAR2, VAR8, VAR11, VAR23);
}

return FUN19(VAR2, VAR38, VAR8);
}

case VAR42: {
FUN8(VAR2, "",
FUN9(VAR8->VAR4->VAR25));

if (!VAR11)
return 0;

if (VAR11->VAR23 != VAR8->VAR4->VAR40)
return 0;

FUN22(VAR11);

if (VAR2->VAR43)
VAR2->FUN23(VAR2, VAR44, VAR2->VAR45);

return 0;
}}

return 0;
}
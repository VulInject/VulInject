int
FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
VAR5 *VAR6, const VAR7 *VAR8, VAR9 *VAR10)
{

VAR11 *VAR12;
int VAR13;
int VAR14 = 0;

if ((VAR12 = malloc(VAR8->VAR15 + 4)) == NULL) {
FUN2("");
return (VAR16);
}

if (FUN3(VAR2, VAR12, VAR8->VAR15, VAR8->VAR17) != VAR8->VAR15) {
FUN2("");
free(VAR12);
return (VAR16);
}


VAR12[VAR8->VAR15 / 4] = 0;

VAR6->VAR18 = VAR19;
VAR6->VAR20 = VAR8->VAR17;
VAR6->VAR21 = VAR8->VAR15;
VAR6->VAR22 = 0;

for (VAR13 = 0; VAR13 < VAR8->VAR15 / 4; VAR13++) {

while (VAR12[VAR13] == VAR23) {
fasttrap_instr_query_t VAR24;

VAR24.VAR25 = FUN4(VAR2)->VAR26;
VAR24.VAR27 = VAR8->VAR17 + VAR13 * 4;

if (FUN5(VAR4->VAR28, VAR29,
&VAR24) != 0) {

if (VAR30 == VAR31 || VAR30 == VAR32) {
if (FUN3(VAR2, &VAR12[VAR13], 4,
VAR24.VAR27) != 4) {
FUN2(""
"");
free(VAR12);
return (VAR16);
}
continue;
}

free(VAR12);
FUN2(""
"", strerror(VAR30));
return (VAR16);
}

VAR12[VAR13] = VAR24.VAR33;
break;
}


if ((VAR12[VAR13] & 0xc1f80000) == 0x81e00000) {
VAR14++;
continue;
}


if ((VAR12[VAR13] & 0xc1f80000) == 0x81e80000) {
VAR14--;
continue;
}

if (VAR14 > 0) {

if (VAR12[VAR13] == 0x81c7e008)
goto VAR34;


if (VAR12[VAR13] == 0x81cfe008)
goto VAR34;


if (((VAR12[VAR13] & 0xc0000000) == 0x40000000 ||
(VAR12[VAR13] & 0xc1f80000) == 0x81c00000) &&
(VAR12[VAR13 + 1] & 0xc1f80000) == 0x81e80000)
goto VAR34;


if ((VAR12[VAR13] & 0xc0000000) == 0x40000000) {
int32_t	VAR35 = VAR12[VAR13] << 2;
uint64_t VAR36 = VAR6->VAR20 + VAR13 * 4 + VAR35;

FUN2("", (VAR37)VAR36);

if (VAR36 == VAR10[0] || VAR36 == VAR10[1] ||
VAR36 == VAR10[2] || VAR36 == VAR10[3])
goto VAR34;
}
} else {

if ((VAR12[VAR13] & 0xc0000000) == 0x40000000) {
int32_t VAR38 = VAR12[VAR13] << 2;

VAR38 += VAR13 * 4;

if ((VAR39)VAR38 >= (VAR39)VAR8->VAR15)
goto VAR34;
}


if ((VAR12[VAR13] & 0xfff80000) == 0x81c00000)
goto VAR34;


if (FUN6(VAR12[VAR13]) == VAR40) {
int32_t VAR38;
int VAR41;

switch (FUN7(VAR12[VAR13])) {
case VAR42:
VAR38 = VAR12[VAR13] & 0x7ffff;
VAR38 <<= 13;
VAR38 >>= 11;

VAR41 = FUN8(VAR12[VAR13]) == 8 && FUN9(VAR12[VAR13]);
break;
case VAR43:
VAR38 = VAR12[VAR13] & 0x3fffff;
VAR38 <<= 10;
VAR38 >>= 8;

VAR41 = FUN8(VAR12[VAR13]) == 8 && FUN9(VAR12[VAR13]);
break;
case VAR44:
VAR38 = (((VAR12[VAR13]) >> 6) & 0xc000) |
((VAR12[VAR13]) & 0x3fff);
VAR38 <<= 16;
VAR38 >>= 14;

VAR41 = 0;
break;
case VAR45:
VAR38 = VAR12[VAR13] & 0x7ffff;
VAR38 <<= 13;
VAR38 >>= 11;

VAR41 = FUN8(VAR12[VAR13]) == 8 && FUN9(VAR12[VAR13]);
break;
case VAR46:
VAR38 = VAR12[VAR13] & 0x3fffff;
VAR38 <<= 10;
VAR38 >>= 8;

VAR41 = FUN8(VAR12[VAR13]) == 8 && FUN9(VAR12[VAR13]);
break;
default:
continue;
}

VAR38 += VAR13 * 4;


if ((VAR39)VAR38 >=
(VAR39)VAR8->VAR15) {
if (VAR41)
goto VAR47;
else
goto VAR34;
}
}
}

continue;
VAR34:
VAR13++;
VAR47:
FUN2("", VAR13 * 4);
VAR6->VAR48[VAR6->VAR22++] = VAR13 * 4;
}

free(VAR12);
if (VAR6->VAR22 > 0) {
if (FUN5(VAR4->VAR28, VAR49, VAR6) != 0) {
FUN2("",
strerror(VAR30));
return (FUN10(VAR4, VAR30));
}
}


return (VAR6->VAR22);
}
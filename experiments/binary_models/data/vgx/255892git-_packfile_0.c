int FUN1(const char *VAR1, const unsigned int VAR2, void *VAR3,
size_t VAR4, struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = VAR3;
uint32_t VAR9, VAR10, VAR11, *VAR12;

if (VAR4 < 4 * 256 + VAR2 + VAR2)
return FUN2("", VAR1);
if (!VAR3)
return FUN2("");

if (VAR8->VAR13 == FUN3(VAR14)) {
VAR9 = FUN4(VAR8->VAR15);
if (VAR9 < 2 || VAR9 > 2)
return FUN2(""VAR16
""
"",
VAR1, VAR9);
} else
VAR9 = 1;

VAR10 = 0;
VAR12 = VAR3;
if (VAR9 > 1)
VAR12 += 2;  
for (VAR11 = 0; VAR11 < 256; VAR11++) {
uint32_t VAR17 = FUN4(VAR12[VAR11]);
if (VAR17 < VAR10)
return FUN2("", VAR1);
VAR10 = VAR17;
}

if (VAR9 == 1) {

if (VAR4 != FUN5(4 * 256 + VAR2 + VAR2, FUN6(VAR10, VAR2 + 4)))
return FUN2("", VAR1);
} else if (VAR9 == 2) {

size_t VAR18 = FUN5(8 + 4*256 + VAR2 + VAR2, FUN6(VAR10, VAR2 + 4 + 4));
size_t VAR19 = VAR18;
if (VAR10)
VAR19 = FUN5(VAR19, FUN6(VAR10 - 1, 8));
if (VAR4 < VAR18 || VAR4 > VAR19)
return FUN2("", VAR1);
if (VAR4 != VAR18 &&

(sizeof(VAR20) <= 4))
return FUN2("", VAR1);
VAR6->VAR21 = 8 + 4 * 256 + VAR10 * VAR2;
}

VAR6->VAR22 = VAR9;
VAR6->VAR23 = VAR3;
VAR6->VAR24 = VAR4;
VAR6->VAR25 = VAR10;
return 0;
}
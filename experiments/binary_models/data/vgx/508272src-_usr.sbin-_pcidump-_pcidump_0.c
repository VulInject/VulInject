void
FUN1(int VAR1, int VAR2, int VAR3, int VAR4)
{
const char *VAR5;
u_int64_t VAR6;
u_int64_t VAR7;
u_int32_t VAR8, VAR9;
int VAR10;

for (VAR10 = VAR11; VAR10 < VAR4; VAR10 += 0x4) {
if (FUN2(VAR1, VAR2, VAR3, VAR10, &VAR8) != 0 ||
FUN3(VAR1, VAR2, VAR3, VAR10, &VAR9) != 0)
FUN4("", VAR10);

FUN5("", VAR10);

if (VAR8 == 0 && VAR9 == 0) {
FUN5("", VAR8);
continue;
}

switch (FUN6(VAR8)) {
case VAR12:
FUN5("");
if (FUN7(VAR8))
FUN5("");

VAR5 = "";
switch (FUN8(VAR8)) {
case VAR13:
VAR5 = "";
case VAR14:
FUN5("", VAR5);

FUN5("",
FUN9(VAR8),
FUN10(VAR9));

break;
case VAR15:
VAR6 = VAR8;
VAR7 = VAR9;
VAR10 += 0x04;
if (FUN2(VAR1, VAR2, VAR3, VAR10, &VAR8) != 0 ||
FUN3(VAR1, VAR2, VAR3, VAR10, &VAR9) != 0)
FUN4("", VAR10);

VAR6 |= (VAR16)VAR8 << 32;
VAR7 |= (VAR16)VAR9 << 32;

FUN5("",
FUN11(VAR6),
FUN12(VAR7));

break;
}
break;

case VAR17:
FUN5("",
FUN13(VAR8),
FUN14(VAR9));
break;
}
}
}
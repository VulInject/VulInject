static VAR1 FUN1(void *VAR2, uint8_t VAR3)
{
VAR4 *VAR5 = VAR2;
uint32_t VAR6 = 0;

switch (VAR5->VAR7 ++) {
case 0:
if (VAR3 & 0x80) {

if (VAR3 & (1 << 1))
FUN2(VAR5);
else {
VAR5->VAR8 = (VAR3 >> 3) & 0xf;
VAR5->VAR9 = (VAR3 >> 2) & 1;
if (VAR5->VAR10 != !(VAR3 & 1)) {
VAR5->VAR10 = !(VAR3 & 1);
FUN3(VAR5->VAR10 ? "" : "");
if (VAR5->VAR11 && !VAR5->VAR10)
FUN4(VAR5->VAR12);
VAR5->VAR11 = VAR5->VAR11 && VAR5->VAR10;
}
FUN5(VAR5);
}

VAR5->VAR7 = 0;
} else if (VAR3) {

VAR5->VAR13 = (VAR3 >> 3) & 0xf;
VAR5->VAR14 = (VAR3 >> 1) & 1;
VAR5->VAR15 = VAR3 & 1;

if (VAR5->VAR15) {

VAR5->VAR16 = FUN6(VAR5, VAR5->VAR13);
FUN5(VAR5);
} else
VAR5->VAR16 = 0;
} else
VAR5->VAR7 = 0;
break;

case 1:
if (VAR5->VAR15)
VAR6 = (VAR5->VAR16 >> 8) & 0xff;
else
VAR5->VAR16 |= VAR3 << 8;
break;

case 2:
if (VAR5->VAR15)
VAR6 = VAR5->VAR16 & 0xff;
else {
VAR5->VAR16 |= VAR3;
FUN7(VAR5, VAR5->VAR13, VAR5->VAR16);
FUN5(VAR5);
}

VAR5->VAR7 = 0;
break;
}

return VAR6;
}
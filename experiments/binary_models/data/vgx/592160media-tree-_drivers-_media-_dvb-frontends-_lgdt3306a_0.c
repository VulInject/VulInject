static enum VAR1
FUN1(struct VAR2 *VAR3,
enum lgdt3306a_lock_check VAR4)
{
u8 VAR5 = 0;
int VAR6;
enum lgdt3306a_modulation	VAR7;
enum lgdt3306a_lock_status VAR8;

VAR7 = VAR9;

switch (VAR4) {
case VAR10:
{
VAR6 = FUN2(VAR3, 0x00a6, &VAR5);
if (VAR6)
return VAR6;

if ((VAR5 & 0x80) == 0x80)
VAR8 = VAR11;
else
VAR8 = VAR12;

FUN3("", VAR8);
break;
}
case VAR13:
{
VAR6 = FUN2(VAR3, 0x0080, &VAR5);
if (VAR6)
return VAR6;

if ((VAR5 & 0x40) == 0x40)
VAR8 = VAR11;
else
VAR8 = VAR12;

FUN3("", VAR8);
break;
}
case VAR14:
{
VAR7 = FUN4(VAR3);
if ((VAR7 == VAR15) || (VAR7 == VAR16)) {
VAR6 = FUN2(VAR3, 0x1094, &VAR5);
if (VAR6)
return VAR6;

if ((VAR5 & 0x80) == 0x80)
VAR8 = VAR11;
else
VAR8 = VAR12;
} else
VAR8 = VAR17;

FUN3("", VAR8);
break;
}
case VAR18:
{
VAR7 = FUN4(VAR3);
if ((VAR7 == VAR15) || (VAR7 == VAR16)) {
VAR6 = FUN2(VAR3, 0x0080, &VAR5);
if (VAR6)
return VAR6;

if ((VAR5 & 0x10) == 0x10)
VAR8 = VAR11;
else
VAR8 = VAR12;
} else
VAR8 = VAR17;

FUN3("", VAR8);
break;
}

default:
VAR8 = VAR17;
FUN5("", VAR4);
break;
}

return VAR8;
}
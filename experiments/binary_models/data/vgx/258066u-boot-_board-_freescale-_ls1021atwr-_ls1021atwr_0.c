int FUN1(void)
{
struct VAR1 *VAR1 = (void *)(VAR2);
int VAR3;

VAR3 = 0;
if (FUN2("")) {
VAR3++;
VAR1->VAR4 |= VAR5;
VAR1->VAR6 = VAR7;
}

if (FUN2("")) {
VAR3++;

if (VAR3 > 1)
goto VAR8;
VAR1->VAR4 |= VAR5;
VAR1->VAR6 = VAR9;
}

VAR3 = 0;
if (FUN2("")) {
VAR3++;
VAR1->VAR4 |= VAR10;
VAR1->VAR11 = VAR12;
}

if (FUN2("")) {
VAR3++;

if (VAR3 > 1)
goto VAR8;
VAR1->VAR4 |= VAR10;
VAR1->VAR11 = VAR13;
}

VAR3 = 0;
if (FUN2("")) {
VAR3++;
VAR1->VAR4 |= VAR14;
VAR1->VAR15 = VAR16;
}

if (FUN2("")) {
VAR3++;

if (VAR3 > 1)
goto VAR8;
VAR1->VAR4 |= VAR14;
VAR1->VAR15 = VAR17;
}

return 0;

VAR8:
FUN3("");
return 0;
}
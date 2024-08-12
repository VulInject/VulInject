static void
FUN1(uid_t VAR1, struct VAR2 *VAR3)
{
struct timeval VAR4;
struct VAR5 *VAR6;
char VAR7[80], VAR8[80];

if (VAR3->VAR9 == 0 && VAR3->VAR10 == 0 &&
VAR3->VAR11 == 0 && VAR3->VAR12 == 0)
return;
(void) FUN2(&(VAR4.VAR13));
VAR4.VAR14 = 0;
VAR6 = FUN3(VAR1);
if (VAR6)
(void) FUN4("", VAR6->VAR15);
else
(void) FUN4("", VAR1);
if (VAR3->VAR9 &&
VAR3->VAR16 >= VAR3->VAR9) {
if (VAR3->VAR17 == 0)
(void) strcpy(VAR8, "");
else if (VAR3->VAR17 > VAR4.VAR13)
FUN5(VAR8,
(long)(VAR3->VAR17 - VAR4.VAR13));
else
(void) strcpy(VAR8, "");
} else
VAR8[0] = '';

if (VAR3->VAR11 && VAR3->VAR18 >= VAR3->VAR11) {
if (VAR3->VAR19 == 0)
(void) strcpy(VAR7, "");
else if (VAR3->VAR19 > VAR4.VAR13)
FUN5(VAR7,
(long)(VAR3->VAR19 - VAR4.VAR13));
else
(void) strcpy(VAR7, "");
} else
VAR7[0] = '';

(void) FUN4("",
(VAR3->VAR9 &&
VAR3->VAR16 >= VAR3->VAR9) ? '' : '',
(VAR3->VAR11 &&
VAR3->VAR18 >= VAR3->VAR11) ? '' : '',
FUN6(VAR3->VAR16),
FUN6(VAR3->VAR9),
FUN6(VAR3->VAR10),
VAR8,
VAR3->VAR18,
VAR3->VAR11,
VAR3->VAR12,
VAR7);
}
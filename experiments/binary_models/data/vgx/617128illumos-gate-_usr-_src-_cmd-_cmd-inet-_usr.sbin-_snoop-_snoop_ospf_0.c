static int
FUN1(int VAR1, struct VAR2 *VAR3, int VAR4)
{
struct VAR5 *VAR6;
int VAR7;

if (VAR4 < VAR8 + VAR9)
return (-1); 

if (VAR1 & VAR10) {
if (VAR3->VAR11.VAR12.VAR13 != 0) {
(void) sprintf(VAR14, "",
FUN2(VAR3->VAR11.VAR12));
}
VAR14 += strlen(VAR14);
if (VAR3->VAR11.VAR15.VAR13 != 0) {
(void) sprintf(VAR14, "",
FUN2(VAR3->VAR11.VAR15));
}
VAR14 += strlen(VAR14);
VAR6 = VAR3->VAR11.VAR16;
VAR7 = 0;
while ((VAR17 *)VAR6 < ((VAR17 *)VAR3 + VAR4)) {
if ((VAR17 *)VAR6 + sizeof (struct VAR5) >
((VAR17 *)VAR3 + VAR4))
return (-1); 
VAR7++;
++VAR6;
}
(void) sprintf(VAR14, "", VAR7);
VAR14 += strlen(VAR14);

}
if (VAR1 & VAR18) {
FUN3("", "",
FUN4(VAR3->VAR19));
FUN5();
(void) snprintf(FUN6(0, 0), FUN7(),
"", FUN8(VAR20,
VAR3->VAR11.VAR21));
(void) snprintf(FUN6(0, 0), FUN7(), "",
FUN2(VAR3->VAR11.VAR22));
(void) snprintf(FUN6(0, 0), FUN7(),
"",
FUN4(VAR3->VAR11.VAR23));
(void) snprintf(FUN6(0, 0), FUN7(),
"", VAR3->VAR11.VAR24);
(void) snprintf(FUN6(0, 0), FUN7(),
"", FUN9(VAR3->VAR11.VAR25));
if (VAR3->VAR11.VAR12.VAR13 != 0) {
(void) snprintf(FUN6(0, 0), FUN7(),
"",
FUN2(VAR3->VAR11.VAR12));
}
if (VAR3->VAR11.VAR15.VAR13 != 0) {
(void) snprintf(FUN6(0, 0), FUN7(),
"",
FUN2(VAR3->VAR11.VAR15));
}
VAR6 = VAR3->VAR11.VAR16;
while ((VAR17 *)VAR6 < ((VAR17 *)VAR3 + VAR4)) {
if ((VAR17 *)VAR6 + sizeof (struct VAR5) >
((VAR17 *)VAR3 + VAR4))
return (-1); 
(void) snprintf(FUN6(0, 0), FUN7(),
"", FUN2(*VAR6));
++VAR6;
}
}
return (VAR4);
}
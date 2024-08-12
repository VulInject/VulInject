VAR1
FUN1(VAR2 *VAR3, uint32_t VAR4)
{
char	VAR5[VAR6];

if (VAR3->VAR7 == VAR8) {
if (VAR4 & VAR9) {
goto VAR10;
} else {
return (FUN2(VAR3));
}
}

if (VAR3->VAR7 == VAR11) {
if (VAR4 & VAR9) {
goto VAR10;
} else {
return (FUN3(VAR3));
}
}

if (VAR4 & VAR9) {
VAR3->VAR12 = 0;
}

if (VAR3->VAR7 == VAR13) {
return (FUN4(VAR3, 0));
} else {
FUN5(0);
return (VAR14);
}

VAR10:
(void) snprintf(VAR5, sizeof (VAR5), ""
"", (void *)VAR3,
VAR4);
(void) FUN6(FUN7(VAR3)->VAR15,
VAR16 | VAR17, VAR5);
return (VAR14);
}
static int
FUN1(VAR1 *VAR2, const VAR3 *VAR4, void *VAR5)
{
dtrace_probeinfo_t VAR6;
dtrace_argdesc_t VAR7;
char VAR8[VAR9];
int VAR10;

(void) FUN2("", ++VAR11);
(void) FUN3(VAR12);

if (FUN4(VAR2, VAR4, &VAR6) != 0) {
(void) FUN2(""
"", VAR4->VAR13, VAR4->VAR14,
VAR4->VAR15, VAR4->VAR16, VAR4->VAR17);
VAR18++;
return (0);
}

for (VAR10 = 0; VAR10 < VAR6.VAR19; VAR10++) {
if (VAR6.VAR20[VAR10].VAR21 == VAR22) {
FUN5(&VAR7, sizeof (VAR23));
VAR7.VAR24 = VAR4->VAR17;
VAR7.VAR25 = VAR10;
(void) FUN6(VAR26, VAR27, &VAR7);

(void) FUN2(""
"", VAR10,
VAR4->VAR13, VAR4->VAR14, VAR4->VAR15,
VAR4->VAR16, VAR4->VAR17,
VAR7.VAR28, VAR7.VAR29);

VAR18++;

if (VAR30)
return (-1);

} else if (VAR31) {
(void) FUN2("", VAR4->VAR17, VAR10,
FUN7(VAR6.VAR20[VAR10].VAR32,
VAR6.VAR20[VAR10].VAR21, VAR8, sizeof (VAR8)));
}
}

return (0);
}
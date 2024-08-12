static void
FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, const int VAR6)
{
int		VAR7, VAR8;
offset_t	VAR9;
struct VAR10	*VAR11;
struct VAR12	*VAR13;
struct VAR14	*VAR15 = &VAR2->VAR16;
time_t		VAR17;

(void) fprintf(VAR4, "", VAR6);
VAR9 = FUN2(VAR2->VAR18,
(VAR19)FUN3(VAR15, FUN4(VAR15, VAR6)) * VAR20, 0);
if (read(VAR2->VAR18, (char *)&VAR2->VAR21, VAR15->VAR22) != VAR15->VAR22) {
(void) fprintf(VAR4, FUN5(""));
return;
}
VAR11 = (struct VAR10 *)&VAR2->VAR21;
VAR13 = (struct VAR12 *)&VAR2->VAR21;
if (!FUN6(VAR11))
(void) fprintf(VAR4, FUN5(
""),
VAR11->VAR23, VAR13->VAR23);
if (VAR11->VAR23 == VAR24) {

VAR17 = (VAR25)VAR11->VAR26;
(void) fprintf(VAR4, "",
VAR11->VAR23, VAR9, FUN7(&VAR17)); 
(void) fprintf(VAR4,
"",
VAR11->VAR27, VAR11->VAR28, VAR11->VAR29, VAR11->VAR30);
(void) fprintf(VAR4,
"",
VAR11->VAR31.VAR32, VAR11->VAR31.VAR33,
VAR11->VAR31.VAR34, VAR11->VAR31.VAR35);
(void) fprintf(VAR4, "",
VAR11->VAR36, VAR11->VAR37, VAR11->VAR38);
for (VAR7 = 1, VAR8 = 0; VAR7 < VAR15->VAR39; VAR7++) {
(void) fprintf(VAR4, "", VAR11->VAR40[VAR7]);
VAR8 += VAR7 * VAR11->VAR40[VAR7];
}
(void) fprintf(VAR4,
FUN5(""), VAR8);
FUN8(VAR4, FUN9(VAR11), VAR15->VAR41);
(void) fprintf(VAR4, FUN5(""));
FUN8(VAR4, FUN10(VAR11), VAR15->VAR42);
(void) fprintf(VAR4, "");
for (VAR7 = 0; VAR7 < VAR15->VAR43; VAR7++) {
(void) fprintf(VAR4,
"", VAR7, FUN11(VAR11)[VAR7]);
for (VAR8 = 0; VAR8 < VAR15->VAR44; VAR8++)	
(void) fprintf(VAR4,
"", FUN12(VAR15, VAR11, VAR7)[VAR8]);
(void) fprintf(VAR4, "");
}
} else if (VAR13->VAR23 == VAR24) {

VAR17 = (VAR25)VAR13->VAR26;
(void) fprintf(VAR4, "",
VAR13->VAR23, VAR9, FUN7(&VAR17));
(void) fprintf(VAR4,
"",
VAR13->VAR27, VAR13->VAR28, VAR13->VAR29,
VAR13->VAR30);
(void) fprintf(VAR4,
"",
VAR13->VAR31.VAR32, VAR13->VAR31.VAR33,
VAR13->VAR31.VAR34, VAR13->VAR31.VAR35);
(void) fprintf(VAR4,
"",
VAR13->VAR36, VAR13->VAR37, VAR13->VAR38);
for (VAR7 = 1, VAR8 = 0; VAR7 < VAR15->VAR39; VAR7++) {
(void) fprintf(VAR4, "", VAR13->VAR40[VAR7]);
VAR8 += VAR7 * VAR13->VAR40[VAR7];
}
(void) fprintf(VAR4,
FUN5(""), VAR8);
FUN8(VAR4, VAR13->VAR45, VAR15->VAR41);
(void) fprintf(VAR4, FUN5(""));
FUN8(VAR4, VAR13->VAR46, VAR15->VAR42);
(void) fprintf(VAR4, "");
for (VAR7 = 0; VAR7 < VAR15->VAR43; VAR7++) {
(void) fprintf(VAR4,
"", VAR7, VAR13->VAR47[VAR7]);
for (VAR8 = 0; VAR8 < VAR48; VAR8++)
(void) fprintf(VAR4, "", VAR13->VAR49[VAR7][VAR8]);
(void) fprintf(VAR4, "");
}
}
}
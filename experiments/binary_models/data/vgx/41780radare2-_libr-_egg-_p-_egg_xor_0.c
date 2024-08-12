static VAR1 *FUN1(VAR2 *VAR3) {
VAR1 *VAR4, *VAR5;
ut8 VAR6[32], VAR7;
const char *VAR8 = VAR9;
char *VAR10 = FUN2 (VAR3, "");
int VAR11;

if (!VAR10 || !*VAR10) {
free (VAR10);
VAR10 = strdup (VAR8);
FUN3 ("", VAR10);
}
VAR7 = FUN4 (NULL, VAR10);
if (VAR7 == 0) {
FUN5 ("", VAR10);
free (VAR10);
return false;
}
if (VAR7 != (VAR7 & 0xff)) {
VAR7 &= 0xff;
FUN6 ("", VAR7);
}
if (FUN7 (VAR3->VAR12) > 240) { 
FUN5 ("");
free (VAR10);
return NULL;
}
VAR5 = VAR3->VAR12; 
if (!FUN7 (VAR5)) {
FUN5 ("");
free (VAR10);
return NULL;
}

for (VAR11 = 0; VAR11 < FUN7 (VAR5); VAR11++) {

if ((FUN8 (VAR5, VAR11) ^ VAR7) == 0) {
FUN6 ("");
free (VAR10);
return NULL;
}
}
VAR4 = FUN9 ();
VAR5 = FUN9 ();



FUN10 (VAR5, VAR3->VAR12);
if (VAR3->VAR13 == VAR14) {
ut8 VAR15[VAR16] =
"" 
"" 
"" 
"" 

"" 
"" 
""; 

VAR6[0] = 0x6a; 
VAR6[1] = FUN7 (VAR5);
VAR6[2] = 0x59; 

VAR6[3] = 0x6a; 
VAR6[4] = VAR7;
VAR6[5] = 0x5b; 
FUN11 (VAR4, VAR6, 6);

FUN12 (VAR4, VAR15, VAR16);

for (VAR11 = 0; VAR11 < FUN7 (VAR5); VAR11++) {
ut8 VAR17 = FUN8 (VAR5, VAR11) ^ VAR7;
FUN13 (VAR5, VAR11, &VAR17, sizeof (VAR17));
}
FUN10 (VAR4, VAR5);
}
FUN14 (VAR5);
free (VAR10);
return VAR4;
}
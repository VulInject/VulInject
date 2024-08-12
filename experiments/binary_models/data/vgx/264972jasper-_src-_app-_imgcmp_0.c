VAR1 *FUN1(VAR2 *VAR3, VAR2 *VAR4)
{
VAR1 *VAR5;
VAR2 *VAR6[3];
int VAR7;
jas_image_cmptparm_t VAR8[3];
jas_seqent_t VAR9;
jas_seqent_t VAR10;

VAR5 = 0;
const jas_matind_t VAR11 = FUN2(VAR3);
const jas_matind_t VAR12 = FUN3(VAR3);

for (VAR7 = 0; VAR7 < 3; ++VAR7) {
VAR8[VAR7].VAR13 = 0;
VAR8[VAR7].VAR14 = 0;
VAR8[VAR7].VAR15 = 1;
VAR8[VAR7].VAR16 = 1;
VAR8[VAR7].VAR11 = VAR11;
VAR8[VAR7].VAR12 = VAR12;
VAR8[VAR7].VAR17 = 8;
VAR8[VAR7].VAR18 = false;
}
if (!(VAR5 = FUN4(3, VAR8, VAR19))) {
fprintf(VAR20, "");
goto VAR21;
}

for (VAR7 = 0; VAR7 < 3; ++VAR7) {
if (!(VAR6[VAR7] = FUN5(VAR12, VAR11))) {
fprintf(VAR20, "");
goto VAR21;
}
}

for (jas_matind_t VAR22 = 0; VAR22 < VAR12; ++VAR22) {
for (jas_matind_t VAR23 = 0; VAR23 < VAR11; ++VAR23) {
VAR9 = FUN6(VAR3, VAR22, VAR23);
VAR10 = FUN6(VAR4, VAR22, VAR23);
if (VAR9 > VAR10) {
FUN7(VAR6[0], VAR22, VAR23, 255);
FUN7(VAR6[1], VAR22, VAR23, 0);
FUN7(VAR6[2], VAR22, VAR23, 0);
} else if (VAR9 < VAR10) {
FUN7(VAR6[0], VAR22, VAR23, 0);
FUN7(VAR6[1], VAR22, VAR23, 255);
FUN7(VAR6[2], VAR22, VAR23, 0);
} else {
FUN7(VAR6[0], VAR22, VAR23, VAR9);
FUN7(VAR6[1], VAR22, VAR23, VAR9);
FUN7(VAR6[2], VAR22, VAR23, VAR9);
}
}
}

for (VAR7 = 0; VAR7 < 3; ++VAR7) {
if (FUN8(VAR5, VAR7, 0, 0, VAR11, VAR12, VAR6[VAR7])) {
fprintf(VAR20, "");
goto VAR21;
}
}

return VAR5;

VAR21:
if (VAR5) {
FUN9(VAR5);
}
return 0;
}
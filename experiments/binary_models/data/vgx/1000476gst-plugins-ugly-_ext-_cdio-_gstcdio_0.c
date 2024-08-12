FUN1 (VAR1,
VAR2,
VAR3,
"",
VAR4, VAR5, "", VAR6, VAR7);


void
FUN2 (VAR8 * VAR9, VAR10 * VAR11, track_t VAR12,
cdtext_field_t VAR13, const VAR14 * VAR15, VAR16 ** VAR17)
{
const VAR14 *VAR18[] = { "", "", NULL };
const VAR14 *VAR19;
VAR14 *VAR20;

VAR19 = FUN3 (VAR11, VAR13, VAR12);
VAR19 = FUN3 (VAR13, VAR11);
if (VAR19 == NULL || *VAR19 == '') {
FUN4 (VAR9, "", VAR13, VAR15);
return;
}


VAR20 = FUN5 (VAR19, -1, VAR18);

if (VAR20 == NULL) {
FUN6 (VAR9, ""
""
"", VAR15);
return;
}



if (*VAR17 == NULL)
*VAR17 = FUN7 ();

FUN8 (*VAR17, VAR21, VAR15, VAR20, NULL);

FUN4 (VAR9, "", VAR15, VAR20);
FUN9 (VAR20);
}
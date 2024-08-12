static void
FUN1(VAR1 *VAR2, VAR3 *VAR4,
int argc, VAR1 *VAR5, const char *VAR6, const char *VAR7)
{
VAR8 *VAR9 = VAR4->VAR10;
int VAR11, VAR12, VAR13, VAR14, VAR15;

char VAR16[VAR17];
char VAR18[VAR17];

VAR15 = VAR4->VAR19 == VAR20 || VAR4->VAR19 == VAR21;

if (VAR9->VAR22 >= 0) {
VAR13 = argc < VAR9->VAR22;
VAR14 = VAR9->VAR22;
} else if (VAR9->VAR23 >= 0) {
VAR13 = (argc < VAR9->VAR23 || argc > VAR9->VAR24);
VAR14 = argc;
} else {
VAR13 = argc != VAR9->VAR24;
VAR14 = VAR9->VAR24;
}

if (VAR13) {
FUN2(VAR25, ""
"", VAR6, VAR4->VAR26, VAR7,
argc, VAR15 ? "" : "", argc == 1 ? "" : "",
VAR9->VAR23 >= 0 ? "" : "",
VAR9->VAR23 >= 0 ? VAR9->VAR23 : VAR14);
}

for (VAR11 = 0; VAR11 < VAR14; VAR11++, VAR5 = VAR5->VAR27) {
if (VAR9->VAR28[VAR11].VAR29 != NULL)
VAR12 = FUN3(&VAR9->VAR28[VAR11], VAR5);
else
VAR12 = 1; 

if (!VAR12) {
FUN2(VAR30,
""
"",
VAR6, VAR4->VAR26, VAR7,
VAR15 ? "" : "", VAR11 + 1,
FUN4(&VAR9->VAR28[VAR11], VAR16,
sizeof (VAR16)),
VAR15 ? "" : "",
FUN4(VAR5, VAR18, sizeof (VAR18)));
}
}

FUN5(VAR2, VAR4->VAR31, VAR4->VAR32, VAR33);
}
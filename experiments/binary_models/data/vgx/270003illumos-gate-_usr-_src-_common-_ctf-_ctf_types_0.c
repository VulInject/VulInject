static void
FUN1(VAR1 *VAR2, VAR3 *VAR4,
const char *VAR5, ctf_id_t VAR6, int VAR7)
{
ctf_funcinfo_t VAR8;

ctf_id_t VAR9[20];

FUN2(VAR4, "", VAR5 == NULL ? "" : VAR5);

if (!VAR7)
goto VAR10;

if (FUN3(VAR2, VAR6, &VAR8) != 0)
goto VAR10;

if (VAR8.VAR11 > FUN4(VAR9))
VAR8.VAR11 = FUN4(VAR9);

if (VAR8.VAR11 == 0) {
FUN2(VAR4, "");
goto VAR10;
}

if (FUN5(VAR2, VAR6, VAR8.VAR11, VAR9) != 0)
goto VAR10;

for (size_t VAR12 = 0; VAR12 < VAR8.VAR11; VAR12++) {
char VAR13[512];

if (FUN6(VAR2, VAR9[VAR12], VAR13, sizeof (VAR13)) == NULL)
(void) FUN7(VAR13, "", sizeof (VAR13));

FUN2(VAR4, "", VAR13,
VAR12 + 1 == VAR8.VAR11 ? "" : "");
}

if (VAR8.VAR14 & VAR15)
FUN2(VAR4, "", VAR8.VAR11 == 0 ? "" : "");

VAR10:
FUN2(VAR4, "");
}
struct VAR1 *
FUN1(const char *VAR2, int VAR3, uint32_t VAR4)
{
struct VAR1 *VAR5 = NULL;
struct VAR6 *VAR7;
struct stat VAR8;
VAR9 *VAR10 = VAR11;
uint32_t VAR12, VAR13, VAR14, VAR15;
int VAR16, VAR17, VAR18;

if ((VAR16 = open(VAR2, VAR3 | VAR19)) == -1)
return NULL;
if (FUN2(VAR16, &VAR8) != 0)
goto VAR20;
if (VAR8.VAR21 < sizeof(struct VAR6))
goto VAR20;
VAR10 = FUN3(NULL, VAR8.VAR21, VAR22 |
((VAR3 & VAR23) ? VAR24 : 0), VAR25, VAR16, 0);
if (VAR10 == VAR11)
goto VAR20;
VAR7 = (struct VAR6 *)VAR10;
if (VAR7->VAR26 != VAR26 || VAR7->VAR4 != VAR4) {
VAR27 = VAR28;
goto VAR20;
}

if (!(VAR5 = calloc(1, sizeof(*VAR5))))
goto VAR20;
VAR5->VAR7 = VAR7;

VAR13 = VAR7->VAR13;
VAR14 = VAR13 - 1;
VAR15 = VAR13 * sizeof(VAR29);
VAR12 = sizeof(*VAR7) + VAR15 * VAR7->VAR30;

for (VAR17 = 0; VAR17 < VAR7->VAR30; VAR17++)
VAR5->VAR31[VAR17] = VAR10 + sizeof(*VAR7) + VAR17 * VAR15;
VAR5->VAR32 = VAR10 + VAR12;
VAR5->VAR33 = VAR8.VAR21;
VAR5->VAR16 = VAR16;
return VAR5;

VAR20:
VAR18 = VAR27;
if (VAR10 != VAR11)
FUN4(VAR10, VAR8.VAR21);
if (VAR16 != -1)
close(VAR16);
free(VAR5);
VAR27 = VAR18;
return NULL;
}
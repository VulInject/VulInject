static void       FUN1 (VAR1             *VAR2,
guint                VAR3,
VAR4              *VAR5,
VAR6          *VAR7);
static void       FUN2 (VAR1             *VAR2,
guint                VAR3,
const VAR4        *VAR5,
VAR6          *VAR7);

static void       FUN3      (VAR8       *VAR9);
static gboolean   FUN4      (VAR8       *VAR9,
void                *VAR10,
void                *VAR11,
void                *VAR12,
glong                VAR13,
const VAR14 *VAR15,
gint                 VAR16);


FUN5 (VAR17, VAR18,
VAR19)



static void
FUN6 (VAR20 *VAR21)
{
VAR22                    *VAR23    = FUN7 (VAR21);
VAR24              *VAR25 = FUN8 (VAR21);
VAR26 *VAR27     = FUN9 (VAR21);

VAR23->VAR28 = VAR29;
VAR23->VAR30 = VAR31;

FUN10 (VAR25,
"",        "",
"",  "",
"", "",
NULL);

VAR25->VAR32 = VAR33;

VAR27->VAR34     = VAR35;

FUN11 (VAR23, VAR36,
FUN12 ("",
"",
"",
0.0, 1.0, 1.0,
VAR37 |
VAR38));
}
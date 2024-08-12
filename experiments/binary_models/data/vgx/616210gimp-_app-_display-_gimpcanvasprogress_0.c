static void             FUN1          (VAR1          *VAR2);
static gboolean         FUN2    (VAR1          *VAR2);
static void             FUN3     (VAR1          *VAR2,
const VAR3           *VAR4);
static void             FUN4    (VAR1          *VAR2,
gdouble                VAR5);
static gdouble          FUN5    (VAR1          *VAR2);
static void             FUN6        (VAR1          *VAR2);
static gboolean         FUN7      (VAR1          *VAR2,
VAR6                  *VAR7,
GimpMessageSeverity    VAR8,
const VAR3           *VAR9,
const VAR3           *VAR4);


FUN8 (VAR10, VAR11,
VAR12,
FUN9 (VAR10)
FUN10 (VAR13,
VAR14))



static void
FUN11 (VAR15 *VAR16)
{
VAR17        *VAR18 = FUN12 (VAR16);
VAR19 *VAR20   = FUN13 (VAR16);

VAR18->VAR21     = VAR22;
VAR18->VAR23 = VAR24;
VAR18->VAR25 = VAR26;

VAR20->VAR27           = VAR28;
VAR20->VAR29    = VAR30;
VAR20->VAR31            = VAR32;

FUN14 (VAR18, VAR33,
FUN15 ("", NULL, NULL,
VAR34,
VAR35,
VAR36));

FUN14 (VAR18, VAR37,
FUN16 ("", NULL, NULL,
-VAR38,
VAR38, 0,
VAR36));

FUN14 (VAR18, VAR39,
FUN16 ("", NULL, NULL,
-VAR38,
VAR38, 0,
VAR36));
}
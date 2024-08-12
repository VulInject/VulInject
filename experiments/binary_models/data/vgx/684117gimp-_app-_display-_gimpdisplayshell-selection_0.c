static void      FUN1      (VAR1          *VAR2);

static gboolean  FUN2        (VAR1          *VAR2);

static gboolean  FUN3      (VAR3           *VAR4,
VAR5 *VAR6,
VAR1           *VAR2);
static gboolean  FUN4 (VAR3           *VAR4,
VAR7  *VAR6,
VAR1           *VAR2);




void
FUN5 (VAR8 *VAR4)
{
VAR1 *VAR2;

FUN6 (FUN7 (VAR4));
FUN6 (VAR4->VAR2 == NULL);

VAR2 = FUN8 (VAR1);

VAR2->VAR4          = VAR4;
VAR2->VAR9  = VAR10;
VAR2->VAR11 = FUN9 (VAR4);

VAR4->VAR2 = VAR2;
VAR4->VAR12 = FUN10 ();

FUN11 (VAR4, "",
FUN12 (VAR13),
VAR2);
FUN11 (VAR4, "",
FUN12 (VAR14),
VAR2);
}
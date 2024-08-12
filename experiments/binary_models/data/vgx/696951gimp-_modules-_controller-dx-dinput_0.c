FUN1 (const VAR1 *VAR2)
{
gint VAR3;

FUN2 ("", VAR2->VAR4);
FUN2 ("", VAR2->VAR5);
FUN2 ("");
if (VAR2->VAR6 == VAR7)
FUN2 ("");
else if (VAR2->VAR6 == VAR8)
FUN2 ("");
else
FUN2 ("", VAR2->VAR6);
FUN2 ("");
FUN2 ("", VAR2->VAR9);
FUN2 ("", VAR2->VAR10);

for (VAR3 = 0; VAR3 < VAR2->VAR10; VAR3++)
{
const VAR11 *VAR12 = (VAR11 *) (((char *) VAR2->VAR13) + VAR3*VAR2->VAR5);
unsigned char *VAR14;

FUN2 ("", VAR3);
if (VAR12->VAR15 == NULL)
FUN2 ("");
else
{
FUN3 (VAR12->VAR15, &VAR14);
FUN2 ("", VAR14);
FUN4 (&VAR14);
}

FUN2 ("", VAR12->VAR16);
FUN2 ("");
switch (FUN5 (VAR12->VAR17))
{
FUN6 (VAR18);
FUN6 (VAR19);
FUN6 (VAR20);
FUN6 (VAR21);
FUN6 (VAR22);
FUN6 (VAR23);
FUN6 (VAR24);
FUN6 (VAR25);
FUN6 (VAR26);
default: FUN2 ("", FUN5 (VAR12->VAR17));
}
FUN2 ("");
if (FUN7 (VAR12->VAR17) == FUN7 (VAR27))
FUN2 ("");
else
FUN2 ("", FUN7 (VAR12->VAR17));
FUN8 (VAR28);
FUN8 (VAR29);
FUN8 (VAR30);
FUN8 (VAR31);
FUN8 (VAR32);
FUN8 (VAR33);
FUN2 ("");
FUN2 ("");
switch (VAR12->VAR6 & VAR34)
{
case VAR35: FUN2 (""); break;
case VAR36: FUN2 (""); break;
case VAR34: FUN2 (""); break;
}
if (VAR12->VAR6 & VAR37)
FUN2 ("");
FUN2 ("");
}
}
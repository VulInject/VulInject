void
FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
VAR5 *VAR6 = FUN2(VAR2);
VAR7 **VAR8;
guint VAR9 = 0;
gint VAR10;

FUN3(FUN4(VAR2));
FUN3(VAR4 != NULL);

VAR8 = FUN5(FUN6(VAR6), &VAR9);
for(VAR10=0; VAR10<VAR9; VAR10++)
{
GType VAR11 = FUN7(VAR8[VAR10]);
VAR3 *VAR12 = NULL;

VAR12 = FUN8("", VAR4, FUN9(VAR2), VAR8[VAR10]->VAR13);

if (VAR11 == VAR14)
{
VAR3 *VAR15;

if (VAR12 && (VAR15 = FUN10(VAR12)))
{
VAR16 *VAR17;
VAR17 = FUN11(VAR15);
if (VAR17)
FUN12(VAR2, VAR8[VAR10]->VAR13, VAR17, NULL);
}
}
else switch (VAR11)
{
case VAR18:
{
gboolean VAR19 = VAR20;
if (FUN13(VAR12, &VAR19))
FUN12(VAR2, VAR8[VAR10]->VAR13, VAR19, NULL);
break;
}
case VAR21:
{
gint VAR22 = 0;
if (FUN14(VAR12, &VAR22))
FUN12(VAR2, VAR8[VAR10]->VAR13, VAR22, NULL);
break;
}
case VAR23:
{
VAR3 *VAR15 = FUN10(VAR12);
if (VAR15)
{
FUN12(VAR2, VAR8[VAR10]->VAR13, VAR15, NULL);
FUN15(VAR15);
}
break;
}
default:
FUN16("");
break;
}
}
}
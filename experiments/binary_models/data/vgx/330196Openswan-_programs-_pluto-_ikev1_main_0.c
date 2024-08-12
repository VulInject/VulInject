void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = &(VAR6->VAR9.delete);
size_t VAR10;
int VAR11;


if (!VAR4->VAR12)
{
FUN2(VAR13, "");
return;
}


if (!FUN3(VAR2->VAR14))
{

FUN2(VAR13, ""
"");
return;
}

if (VAR8->VAR15 == 0)
{
FUN2(VAR13, "");
return;
}

switch (VAR8->VAR16)
{
case VAR17:
VAR10 = 2 * VAR18;
break;
case VAR19:
case VAR20:
VAR10 = sizeof(VAR21);
break;
case VAR22:

return;
default:
FUN2(VAR13
, ""
, FUN4(&VAR23, VAR8->VAR16));
return;
}

if (VAR8->VAR24 != VAR10)
{
FUN2(VAR13
, ""
, VAR8->VAR24, FUN4(&VAR23, VAR8->VAR16));
return;
}

if (FUN5(&VAR6->VAR25) != VAR8->VAR15 * VAR10)
{
FUN2(VAR13
, "");
return;
}

for (VAR11 = 0; VAR11 < VAR8->VAR15; VAR11++)
{
VAR26 *VAR27 = VAR6->VAR25.VAR28 + (VAR11 * VAR10);

if (VAR8->VAR16 == VAR17)
{

struct VAR1 *VAR29 = FUN6(VAR27 
, VAR27+VAR18 
, &VAR2->VAR30->VAR31.VAR32.VAR33
, VAR34);

if (VAR29 == NULL)
{
FUN2(VAR13, ""
"");
}
else if (!FUN7(VAR2->VAR30, VAR29->VAR30, NULL))
{

FUN2(VAR13, ""
"");
}
else
{
struct VAR35 *VAR36;

VAR36 = VAR37;
FUN8(VAR29->VAR30);
if (VAR38) {
FUN9(VAR4, VAR29);
}
FUN2(VAR13, ""
"", VAR29->VAR39);
FUN10(VAR29);
FUN8(VAR36);
}
}
else
{

bool VAR40;
struct VAR1 *VAR29 = FUN11(VAR2
, VAR8->VAR16
, *(VAR21 *)VAR27	
, &VAR40);

if (VAR29 == NULL)
{
FUN2(VAR13
, ""
, FUN4(&VAR23, VAR8->VAR16)
, (unsigned long)FUN12((unsigned long)*(VAR21 *)VAR27)
, VAR40 ? "" : "");
}
else
{
struct VAR35 *VAR41 = VAR29->VAR30;
struct VAR35 *VAR36;

VAR36 = VAR37;
FUN8(VAR41);

if (VAR38) {
FUN9(VAR4, VAR29);
}
if (VAR41->VAR42 == VAR29->VAR39
&& (VAR41->VAR43 & VAR44))
{

if (VAR29->VAR45 != NULL
&& VAR29->VAR45->VAR46 == VAR47
&& VAR29->VAR45->VAR48 <= VAR49 + FUN13())
{

FUN2(VAR13, ""
""
, VAR29->VAR39, (int)(VAR29->VAR45->VAR48 - FUN13()));
}
else
{
FUN2(VAR13, ""
""
, VAR29->VAR39, VAR49);
VAR29->VAR50 = VAR49;
FUN14(VAR29);
FUN15(VAR47, VAR49, VAR29);
}
}
else
{
FUN2(VAR13, ""
""
, (unsigned long)FUN12((unsigned long)*(VAR21 *)VAR27)
, VAR29->VAR39);
FUN10(VAR29);
}


FUN8(VAR36);
}
}
}
}
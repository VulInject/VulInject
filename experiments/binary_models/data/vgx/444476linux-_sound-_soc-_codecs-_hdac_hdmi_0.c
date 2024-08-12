static int FUN1(struct VAR1 *VAR2,
struct VAR3 **VAR4, int *VAR5)
{
hda_nid_t VAR6;
int VAR7, VAR8;
struct VAR9 *VAR10 = FUN2(VAR2);
int VAR11;

FUN3(VAR2);
FUN4(VAR2);

VAR8 = FUN5(VAR2, VAR2->VAR12, &VAR6);
if (!VAR6 || VAR8 <= 0) {
FUN6(&VAR2->VAR13, "");
return -VAR14;
}

for (VAR7 = 0; VAR7 < VAR8; VAR7++, VAR6++) {
unsigned int VAR15;
unsigned int VAR16;

VAR15 = FUN7(VAR2, VAR6);
VAR16 = FUN8(VAR15);

if (!(VAR15 & VAR17))
continue;

switch (VAR16) {

case VAR18:
VAR11 = FUN9(VAR2, VAR6);
if (VAR11 < 0)
return VAR11;
break;

case VAR19:
VAR11 = FUN10(VAR2, VAR6);
if (VAR11 < 0)
return VAR11;
break;
}
}

if (!VAR10->VAR20 || !VAR10->VAR21) {
VAR11 = -VAR22;
FUN11(&VAR2->VAR13, "", VAR23);
return VAR11;
}

VAR11 = FUN12(VAR2, VAR4, VAR10, VAR10->VAR21);
if (VAR11) {
FUN11(&VAR2->VAR13, "",
VAR11);
return VAR11;
}

*VAR5 = VAR10->VAR21;
VAR11 = FUN13(VAR2);
if (VAR11 < 0)
FUN11(&VAR2->VAR13, "",
VAR11);
return VAR11;
}
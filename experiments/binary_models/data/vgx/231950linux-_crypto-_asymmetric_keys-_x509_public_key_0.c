int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;

FUN2("", VAR4);

if (VAR2->VAR5 != VAR2->VAR6 ||
memcmp(VAR2->VAR7, VAR2->VAR8,
VAR2->VAR6) != 0)
goto VAR9;

if (VAR2->VAR10->VAR11[0] || VAR2->VAR10->VAR11[1]) {

bool VAR12 = FUN3(VAR2->VAR13, VAR2->VAR10->VAR11[1]);
bool VAR14 = FUN3(VAR2->VAR15, VAR2->VAR10->VAR11[0]);

if (!VAR12 && !VAR14)
goto VAR9;

VAR3 = -VAR16;
if (((VAR12 && !VAR14) || (VAR14 && !VAR12)) &&
VAR2->VAR10->VAR11[0] && VAR2->VAR10->VAR11[1])
goto VAR17;
}

VAR3 = FUN4(VAR2->VAR18, VAR2->VAR10);
if (VAR3 < 0) {
if (VAR3 == -VAR19) {
VAR2->VAR20 = true;
VAR3 = 0;
}
goto VAR17;
}

FUN2("");
VAR2->VAR21 = true;

VAR17:
FUN2("", VAR4, VAR3);
return VAR3;

VAR9:
FUN2("", VAR4);
return 0;
}
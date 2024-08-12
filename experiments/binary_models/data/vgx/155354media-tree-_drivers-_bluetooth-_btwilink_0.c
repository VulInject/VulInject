static int FUN1(struct VAR1 *VAR2)
{
unsigned long VAR3;
struct VAR4 *VAR5;
int VAR6, VAR7;

FUN2("", VAR2->VAR8, VAR2);


VAR5 = FUN3(VAR2);

for (VAR7 = 0; VAR7 < VAR9; VAR7++) {
VAR10[VAR7].VAR11 = VAR5;
VAR10[VAR7].VAR12 = VAR13;
VAR10[VAR7].recv = VAR14;
VAR10[VAR7].VAR15 = VAR16;


FUN4(&VAR5->VAR17);

VAR5->VAR18 = -VAR19;

VAR6 = FUN5(&VAR10[VAR7]);
if (!VAR6)
goto VAR20;

if (VAR6 != -VAR19) {
FUN6("", VAR6);
return VAR6;
}


FUN2(""
"");
VAR3 = VAR21
(&VAR5->VAR17,
FUN7(VAR22));
if (!VAR3) {
FUN6(""
"",
VAR22 / 1000);
return -VAR23;
}


if (VAR5->VAR18 != 0) {
FUN6(""
"", VAR5->VAR18);
return -VAR24;
}

VAR20:
VAR5->VAR25 = VAR10[VAR7].write;
if (!VAR5->VAR25) {
FUN6("");
for (VAR7 = 0; VAR7 < VAR9; VAR7++) {

VAR6 = FUN8(&VAR10[VAR7]);
if (VAR6)
FUN6(""
"", VAR6);
VAR5->VAR25 = NULL;
}
return -VAR26;
}
}
return 0;
}
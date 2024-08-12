static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = &VAR2->VAR6;
struct VAR3 *VAR7;
int VAR8;

FUN2(VAR4, VAR7) {
u32 VAR9 = 0;

FUN3(VAR7, "", &VAR9);

switch (VAR9) {
case VAR10:
VAR2->VAR11 = VAR7;
FUN4(VAR7);
break;
case VAR12:
VAR2->VAR13 = VAR7;
FUN4(VAR7);
break;
default:
FUN5(&VAR2->VAR14->VAR15,
"", VAR9);
break;
}
}

if (!VAR2->VAR11) {
FUN6(&VAR2->VAR14->VAR15, "");
return -VAR16;
}

VAR8 = FUN3(VAR2->VAR11, "",
&VAR6->VAR17);
if (VAR8 < 0) {
FUN6(&VAR2->VAR14->VAR15,
"");
goto VAR18;
}

VAR8 = FUN3(VAR2->VAR11, "",
&VAR6->VAR19);
if (VAR8 < 0) {
FUN6(&VAR2->VAR14->VAR15,
"");
goto VAR18;
}

VAR8 = FUN3(VAR2->VAR11, "",
&VAR6->VAR20);
if (VAR8 < 0) {
FUN6(&VAR2->VAR14->VAR15,
"");
goto VAR18;
}

FUN3(VAR2->VAR11, "",
&VAR6->VAR21);

FUN3(VAR2->VAR11, "",
&VAR6->VAR22);
VAR6->VAR22 = FUN7(VAR6->VAR22);

if (!VAR2->VAR13) {
FUN5(&VAR2->VAR14->VAR15,
"");
VAR8 = -VAR16;
goto VAR18;
}


VAR8 = FUN3(VAR2->VAR13,
"",
&VAR6->VAR23);
if (VAR8 < 0) {
FUN6(&VAR2->VAR14->VAR15,
"");
goto VAR18;
}

return 0;

VAR18:
FUN8(VAR2->VAR11);
FUN8(VAR2->VAR13);

return VAR8;
}
static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
int VAR7;

if (!VAR4)
return;

if (FUN2(VAR4, "")) {
VAR7 = FUN3(VAR4, "", &VAR6->VAR8);
if (VAR7)
FUN4(VAR2, "", VAR7);
return;
}

if (FUN2(VAR4, "")) {
VAR7 = FUN5(VAR4, "", &VAR6->VAR9);
if (VAR7)
FUN4(VAR2, "", VAR7);
else if (VAR6->VAR9 >= VAR10)
FUN4(VAR2, "");
else
VAR6->VAR11 = true;
}


if (!FUN2(VAR4, ""))
return;

VAR7 = FUN3(VAR4, "", &VAR6->VAR12);
if (VAR7) {
FUN4(VAR2,
"",
VAR7);
}

if (!FUN2(VAR4, ""))
return;

VAR7 = FUN5(VAR4, "",
&VAR6->VAR13);
if (VAR7) {
FUN4(VAR2,
"",
VAR7);
} else {
VAR6->VAR14 = true;
}
}
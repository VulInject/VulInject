int
FUN1(VAR1 **VAR2, VAR3 *VAR4)
{
int VAR5 = -1;
size_t VAR6;

if (VAR2 == NULL || *VAR2 != NULL) {
FUN2(VAR7, "", FUN3(""));
return -1;
}

*VAR2 = FUN4(VAR1, 1);

for (VAR6 = 0; VAR6 < VAR4->VAR8; VAR6++) {
VAR9 *VAR10 = &VAR4->VAR11[VAR6];

if (FUN5(VAR10->VAR12, "")) {
FUN6((*VAR2)->VAR13);

(*VAR2)->VAR13 = FUN7(VAR10->VAR14);

if (FUN8((*VAR2)->VAR13, "") &&
FUN8((*VAR2)->VAR13, "")) {
FUN2(VAR15,
FUN3(""
""),
(*VAR2)->VAR13);
goto VAR16;
}
} else {
FUN9("",
VAR10->VAR12);
}
}

if (!(*VAR2)->VAR13)
(*VAR2)->VAR13 = FUN7("");

VAR5 = 0;

VAR16:
if (VAR5 < 0)
FUN10(VAR2);

return VAR5;
}
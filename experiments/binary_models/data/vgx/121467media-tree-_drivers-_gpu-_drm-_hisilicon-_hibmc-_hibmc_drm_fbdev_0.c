int FUN1(struct VAR1 *VAR2)
{
int VAR3;
struct VAR4 *VAR5;
struct VAR6 *VAR7;
struct VAR8 *VAR9;

VAR9 = FUN2(VAR2->VAR10->VAR10, sizeof(*VAR9), VAR11);
if (!VAR9) {
FUN3("");
return -VAR12;
}

VAR2->VAR13 = VAR9;
FUN4(VAR2->VAR10, &VAR9->VAR14,
&VAR15);


VAR3 = FUN5(VAR2->VAR10, &VAR9->VAR14, 1);
if (VAR3) {
FUN3("", VAR3);
return VAR3;
}

VAR3 = FUN6(&VAR9->VAR14);
if (VAR3) {
FUN3("", VAR3);
goto VAR16;
}

VAR3 = FUN7(&VAR9->VAR14, 16);
if (VAR3) {
FUN3("", VAR3);
goto VAR16;
}

VAR5 = &VAR9->VAR14.VAR13->VAR5;
VAR7 = &VAR9->VAR14.VAR13->VAR7;

FUN8(""
""
""
""
""
""
""
""
"", VAR5->VAR17, VAR5->VAR18, VAR5->VAR19,
VAR5->VAR20, VAR5->VAR21, VAR5->VAR22,
VAR5->VAR23);
FUN8(""
""
""
""
""
""
""
""
""
""
""
""
"", VAR7->VAR24, VAR7->VAR25, VAR7->VAR26,
VAR7->VAR27, VAR7->VAR28, VAR7->VAR29,
VAR7->VAR30, VAR7->VAR31, VAR7->VAR32,
VAR7->VAR33, VAR7->VAR34);

return 0;

VAR16:
FUN9(&VAR9->VAR14);
return VAR3;
}
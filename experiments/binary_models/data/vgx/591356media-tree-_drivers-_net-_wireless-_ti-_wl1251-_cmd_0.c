int FUN1(struct VAR1 *VAR2, u8 VAR3)
{
struct VAR4 *VAR5 = NULL;
int VAR6 = 0;

FUN2(VAR7, "");

VAR5 = FUN3(sizeof(*VAR5), VAR8);
if (!VAR5) {
VAR6 = -VAR9;
goto VAR10;
}

VAR5->VAR3 = VAR3;
VAR5->VAR11 = 1;
VAR5->VAR12 = 5;
VAR5->VAR13 = 128;
VAR5->VAR14 = 1; 

VAR6 = FUN4(VAR2, VAR15, VAR5,
sizeof(*VAR5));
if (VAR6 < 0) {
FUN5("");
goto VAR10;
}

VAR10:
FUN6(VAR5);
return VAR6;
}
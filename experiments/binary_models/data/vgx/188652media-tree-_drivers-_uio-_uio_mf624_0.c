static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
struct VAR5 *VAR6;

VAR6 = FUN2(sizeof(struct VAR5), VAR7);
if (!VAR6)
return -VAR8;

if (FUN3(VAR2))
goto VAR9;

if (FUN4(VAR2, ""))
goto VAR10;

VAR6->VAR11 = "";
VAR6->VAR12 = "";




if (FUN5(VAR2, 0, &VAR6->VAR13[0], ""
""))
goto VAR14;

if (FUN5(VAR2, 2, &VAR6->VAR13[1], ""))
goto VAR15;


if (FUN5(VAR2, 4, &VAR6->VAR13[2], ""))
goto VAR16;

VAR6->VAR17 = VAR2->VAR17;
VAR6->VAR18 = VAR19;
VAR6->VAR20 = VAR21;

VAR6->VAR22 = VAR23;

if (FUN6(&VAR2->VAR2, VAR6))
goto VAR24;

FUN7(VAR2, VAR6);

return 0;

VAR24:
FUN8(VAR6->VAR13[2].VAR25);
VAR16:
FUN8(VAR6->VAR13[1].VAR25);
VAR15:
FUN8(VAR6->VAR13[0].VAR25);

VAR14:
FUN9(VAR2);

VAR10:
FUN10(VAR2);

VAR9:
FUN11(VAR6);
return -VAR26;
}
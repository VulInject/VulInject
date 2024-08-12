int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR6, enum mtk_mdp_comp_id VAR7)
{
struct VAR3 *VAR8;
struct VAR9 *VAR10;
int VAR11;

if (VAR7 < 0 || VAR7 >= VAR12) {
FUN2(VAR2, "", VAR7);
return -VAR13;
}

VAR6->VAR14 = FUN3(VAR4);
VAR6->VAR15 = VAR7;
VAR6->VAR16 = VAR17[VAR7].VAR16;
VAR6->VAR18 = FUN4(VAR4, 0);

for (VAR11 = 0; VAR11 < FUN5(VAR6->VAR19); VAR11++) {
VAR6->VAR19[VAR11] = FUN6(VAR4, VAR11);


if (VAR6->VAR16 != VAR20)
break;
}


VAR6->VAR21 = NULL;
if (VAR6->VAR16 != VAR20 &&
VAR6->VAR16 != VAR22 &&
VAR6->VAR16 != VAR23)
return 0;

VAR8 = FUN7(VAR4, "", 0);
if (!VAR8) {
FUN2(VAR2,
"",
VAR4->VAR24);
return -VAR13;
}

VAR10 = FUN8(VAR8);
if (!VAR10) {
FUN9(VAR2, "",
VAR8->VAR24);
FUN10(VAR8);
return -VAR25;
}
FUN10(VAR8);

VAR6->VAR21 = &VAR10->VAR2;

return 0;
}
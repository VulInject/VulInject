int FUN1(struct VAR1 *VAR2)
{
u32 VAR3, VAR4;
int VAR5;


for (VAR5 = 0; VAR5 < VAR6; VAR5++) {
if (FUN2(VAR2))
break;

FUN3(VAR7, VAR8);
}

if (VAR5 >= VAR6) {
FUN4(VAR2->VAR9, "");
return -VAR10;
}

VAR3 = FUN5(VAR2, VAR11);
VAR4 = FUN6(VAR2, VAR3 + VAR12);

FUN4(VAR2->VAR9, "",
FUN7(VAR13, VAR4),
FUN7(VAR14, VAR4));

return 0;
}
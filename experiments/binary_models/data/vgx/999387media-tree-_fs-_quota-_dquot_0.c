int FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
int VAR6;
int VAR7;

VAR7 = FUN3(VAR2, VAR3);
if (VAR7)
return VAR7;
if (VAR5->VAR8 & VAR9)
return 0;


if (VAR2->VAR10->VAR11)
VAR2->VAR10->FUN4(VAR2, 1);
FUN5(VAR2->VAR12);


for (VAR6 = 0; VAR6 < VAR13; VAR6++) {
if (VAR3 != -1 && VAR6 != VAR3)
continue;
if (!FUN6(VAR2, VAR6))
continue;
FUN7(VAR5->VAR14[VAR6]);
FUN8(&VAR5->VAR14[VAR6]->VAR15, 0);
FUN9(VAR5->VAR14[VAR6]);
}

return 0;
}
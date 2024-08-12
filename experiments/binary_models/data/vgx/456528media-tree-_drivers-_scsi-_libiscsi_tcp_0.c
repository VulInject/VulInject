int FUN1(struct VAR1 *VAR2)
{
int VAR3;
int VAR4;


for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++) {
struct VAR6 *VAR7 = VAR2->VAR8[VAR4];
struct VAR9 *VAR10 = VAR7->VAR11;




if (FUN2(&VAR10->VAR12,
VAR2->VAR13 * 2, NULL,
sizeof(struct VAR14))) {
goto VAR15;
}


if (FUN3(&VAR10->VAR16,
VAR2->VAR13 * 4 * sizeof(void*), VAR17)) {
FUN4(&VAR10->VAR12);
goto VAR15;
}
FUN5(&VAR10->VAR18);
FUN5(&VAR10->VAR19);
}

return 0;

VAR15:
for (VAR3 = 0; VAR3 < VAR4; VAR3++) {
struct VAR6 *VAR7 = VAR2->VAR8[VAR3];
struct VAR9 *VAR10 = VAR7->VAR11;

FUN6(&VAR10->VAR16);
FUN4(&VAR10->VAR12);
}
return -VAR20;
}
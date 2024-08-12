static int FUN1(struct VAR1 *VAR2, void *VAR3,
const struct VAR4 *VAR5, int VAR6,
struct VAR7 *VAR8)
{
struct VAR9 *VAR10;
int VAR11, VAR12, VAR13;


for (VAR12 = 0; VAR12 < FUN2(VAR8->VAR14); VAR12++) {
VAR10 = &VAR8->VAR15[VAR12];

for (VAR13 = 0; VAR13 < VAR6; VAR13++) {

if (VAR5[VAR13].VAR16 != VAR17 ||
VAR5[VAR13].VAR18 != FUN2(VAR10->VAR18))
continue;

VAR11 = VAR5[VAR13].FUN3(VAR2, VAR10, VAR3, VAR5[VAR13].VAR19);
if (VAR11)
return VAR11;
}
}

return 0;
}
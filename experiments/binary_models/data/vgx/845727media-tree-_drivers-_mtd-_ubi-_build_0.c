int FUN1(struct VAR1 *VAR2, int VAR3, struct VAR4 *VAR5)
{
struct ubi_notification VAR6;
int VAR7, VAR8 = 0;

FUN2(VAR2, &VAR6.VAR9);

FUN3(&VAR2->VAR10);
for (VAR7 = 0; VAR7 < VAR2->VAR11; VAR7++) {

if (!VAR2->VAR12[VAR7])
continue;

FUN4(VAR2, VAR2->VAR12[VAR7], &VAR6.VAR13);
if (VAR5)
VAR5->FUN5(VAR5, VAR3, &VAR6);
else
FUN6(&VAR14, VAR3,
&VAR6);
VAR8 += 1;
}
FUN7(&VAR2->VAR10);

return VAR8;
}
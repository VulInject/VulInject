struct VAR1 *FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
struct VAR1 *VAR6;
int VAR7;
u32 VAR8;

if (!VAR3->VAR9)
return FUN2(-VAR10);

VAR8 = (1 << VAR5->VAR11);
VAR6 = VAR3->FUN3(VAR3,
VAR5, NULL);
if (FUN4(VAR6))
return VAR6;

VAR6->VAR12 = VAR5->VAR12;
VAR6->VAR11 = VAR5->VAR11;
VAR6->VAR3 = VAR3;
VAR6->VAR13 = NULL;
FUN5(&VAR6->VAR14, 0);

for (VAR7 = 0; VAR7 < VAR8; VAR7++)
FUN6(&VAR6->VAR12[VAR7]->VAR14);

return VAR6;
}
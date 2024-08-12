int FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR2->VAR4 = FUN2(VAR5, sizeof(*VAR2->VAR4), VAR6);
if (!VAR2->VAR4)
return -VAR7;
for (VAR3 = 0; VAR3 < VAR5; VAR3++)
VAR2->VAR4[VAR3] = NULL;
VAR2->VAR8 = 0;
VAR2->VAR9 = 1;
VAR2->VAR10 = 0;
FUN3(&VAR2->VAR11);
return 0;
}
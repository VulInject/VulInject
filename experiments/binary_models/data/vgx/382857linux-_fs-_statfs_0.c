static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
int VAR4;

if (!VAR1->VAR5->VAR6->VAR7)
return -VAR8;

memset(VAR3, 0, sizeof(*VAR3));
VAR4 = FUN2(VAR1);
if (VAR4)
return VAR4;
VAR4 = VAR1->VAR5->VAR6->FUN3(VAR1, VAR3);
if (VAR4 == 0 && VAR3->VAR9 == 0)
VAR3->VAR9 = VAR3->VAR10;
return VAR4;
}
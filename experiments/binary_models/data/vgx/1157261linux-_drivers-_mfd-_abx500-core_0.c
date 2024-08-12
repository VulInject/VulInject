int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5;

FUN2(VAR2->VAR6, &VAR5);
if (VAR5 && VAR5->VAR7)
return VAR5->FUN3(VAR2, VAR3);
else
return -VAR8;
}
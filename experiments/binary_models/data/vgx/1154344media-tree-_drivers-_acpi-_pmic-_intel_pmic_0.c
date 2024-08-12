static int FUN1(struct VAR1 *VAR2,
int VAR3, VAR4 *VAR5)
{
int VAR6, VAR7;

if (!VAR2->VAR8->VAR9)
return -VAR10;

VAR6 = VAR2->VAR8->FUN2(VAR2->VAR11, VAR3);
if (VAR6 < 0)
return VAR6;

if (!VAR2->VAR12) {
*VAR5 = VAR6;
return 0;
}

VAR7 = FUN3(VAR2->VAR12, VAR6);
if (VAR7 < 0)
return VAR7;

*VAR5 = VAR7;
return 0;
}
static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

if (!VAR2) 
return -VAR4;

if (FUN2(!FUN3(VAR2),
"", VAR5))
return -VAR4;

if (FUN4(VAR2->VAR6->VAR7.VAR8))
return -VAR9;

FUN5(FUN6(VAR2->VAR6), VAR2->VAR10,
VAR11);
VAR3 = FUN7(VAR2, VAR12, VAR11);
memset(VAR2, 0, sizeof(*VAR2));
return VAR3;
}
void FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6;
unsigned VAR7, VAR8;

VAR7 = FUN2(*VAR4,  VAR9);
if (FUN3(VAR2, VAR7, &VAR6, &VAR8))
return;

if (!FUN4(VAR8, VAR6->VAR10))
return;

FUN5(VAR8, VAR6->VAR10);
--VAR6->VAR11;

if (FUN6(VAR6))
FUN7(&VAR6->VAR12);
}
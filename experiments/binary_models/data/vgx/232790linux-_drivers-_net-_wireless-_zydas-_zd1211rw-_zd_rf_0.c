int FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4;
struct VAR5 *VAR6 = FUN2(VAR2);

FUN3(FUN4(&VAR6->mutex));
VAR3 = FUN5(VAR6);
if (VAR3)
return VAR3;
VAR4 = VAR2->FUN6(VAR2);
VAR3 = FUN7(VAR6);
if (VAR4)
VAR3 = VAR4;
return VAR3;
}
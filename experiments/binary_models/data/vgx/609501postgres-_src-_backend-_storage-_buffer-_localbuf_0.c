VAR1
FUN1(SMgrRelation VAR2, ForkNumber VAR3,
BlockNumber VAR4)
{
PrefetchBufferResult VAR5 = {VAR6, false};
BufferTag	VAR7;			
VAR8 *VAR9;

FUN2(&VAR7, &VAR2->VAR10.VAR11, VAR3, VAR4);


if (VAR12 == NULL)
FUN3();


VAR9 = (VAR8 *)
FUN4(VAR12, &VAR7, VAR13, NULL);

if (VAR9)
{

VAR5.VAR14 = -VAR9->VAR15 - 1;
}
else
{

FUN5(VAR2, VAR3, VAR4);
VAR5.VAR16 = true;
}

return VAR5;
}
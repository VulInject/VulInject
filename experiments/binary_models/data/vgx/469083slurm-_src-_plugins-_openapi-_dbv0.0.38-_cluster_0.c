static VAR1 FUN1(VAR2 *VAR3, void *VAR4)
{
VAR5 *VAR6 = VAR4;
VAR7 *VAR8;
parser_env_t VAR9 = {
.VAR10 = VAR6->VAR10,
.VAR11 = VAR6->VAR12,
};

FUN2(VAR6->VAR13 == VAR14);

if (FUN3(VAR3) != VAR15) {
FUN4(VAR6->VAR16, VAR17,
"", NULL);
return VAR18;
}

VAR8 = xmalloc(sizeof(VAR7));
FUN5(VAR8, false);

VAR8->VAR19 = FUN6(
VAR20);
(void)FUN7(VAR6->VAR21, VAR8);

if (FUN8(VAR22, VAR8, VAR3, VAR6->VAR16, &VAR9))
return VAR18;

return VAR23;
}
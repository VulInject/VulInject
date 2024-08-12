static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
int VAR5, VAR6 = 1024;

if (FUN2(VAR2->VAR7))
return VAR8;

VAR5 = FUN3(VAR2->VAR7, VAR4, VAR6);
if (VAR5 < 0)
return VAR5;

VAR4->VAR9 = 0;

return VAR5;
}

const AVInputFormat VAR10 = {
.VAR11           = "",
.VAR12      = FUN4(""),
.VAR13     = VAR14,
.VAR15    = VAR16,
.VAR17    = VAR18,
.VAR19     = "",
};
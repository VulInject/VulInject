static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
VAR1 *VAR5 = VAR2->VAR6->VAR7[0];
VAR3 *VAR8 = FUN2(VAR5, VAR4->VAR9);
int VAR10;

if (!VAR8) {
VAR10 = FUN3(VAR11);
goto VAR12;
}

VAR10 = FUN4(VAR8, VAR4);
if (VAR10 < 0)
goto VAR12;
VAR10 = FUN5(VAR8, VAR4);
if (VAR10 < 0)
goto VAR12;
FUN6(&VAR4);
return FUN7(VAR5, VAR8);
VAR12:
FUN6(&VAR4);
FUN6(&VAR8);
return VAR10;
}

static const AVFilterPad VAR13[] = {
{
.VAR14         = "",
.VAR15         = VAR16,
.VAR17 = VAR17,
},
};
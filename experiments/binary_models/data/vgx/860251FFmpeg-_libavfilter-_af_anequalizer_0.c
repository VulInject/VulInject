static int FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = VAR2->VAR5[0];
VAR3 *VAR6 = VAR2->VAR7[0];
VAR8 *VAR9 = VAR2->VAR10;
VAR11 *VAR12;
VAR13 *VAR14;
static const enum AVPixelFormat VAR15[] = { VAR16, VAR17 };
static const enum AVSampleFormat VAR18[] = {
VAR19,
VAR20
};
int VAR21;

if (VAR9->VAR22) {
VAR3 *VAR23 = VAR2->VAR7[1];
VAR12 = FUN2(VAR15);
if ((VAR21 = FUN3(VAR12, &VAR23->VAR24.VAR12)) < 0)
return VAR21;
}

VAR12 = FUN2(VAR18);
if ((VAR21 = FUN3(VAR12, &VAR4->VAR25.VAR12)) < 0 ||
(VAR21 = FUN3(VAR12, &VAR6->VAR24.VAR12)) < 0)
return VAR21;

VAR14 = FUN4();
if ((VAR21 = FUN5(VAR14, &VAR4->VAR25.VAR26)) < 0 ||
(VAR21 = FUN5(VAR14, &VAR6->VAR24.VAR26)) < 0)
return VAR21;

VAR12 = FUN6();
if ((VAR21 = FUN3(VAR12, &VAR4->VAR25.VAR27)) < 0 ||
(VAR21 = FUN3(VAR12, &VAR6->VAR24.VAR27)) < 0)
return VAR21;

return 0;
}
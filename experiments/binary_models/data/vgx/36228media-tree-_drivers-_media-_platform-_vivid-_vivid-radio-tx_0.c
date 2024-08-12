VAR1 FUN1(struct VAR2 *VAR2, const char VAR3 *VAR4,
size_t VAR5, VAR6 *VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR2);
struct VAR10 *VAR11 = VAR9->VAR12.VAR11;
struct timespec VAR13;
unsigned VAR14;
int VAR15;

if (VAR9->VAR16)
return -VAR17;

if (VAR5 < sizeof(*VAR11))
return -VAR17;
VAR5 = sizeof(*VAR11) * (VAR5 / sizeof(*VAR11));

if (FUN3(&VAR9->mutex))
return -VAR18;
if (VAR9->VAR19 &&
VAR2->VAR20 != VAR9->VAR19) {
FUN4(&VAR9->mutex);
return -VAR21;
}
VAR9->VAR19 = VAR2->VAR20;

VAR22:
FUN5(&VAR13);
VAR13 = FUN6(VAR13, VAR9->VAR23);
VAR14 = VAR13.VAR24 * 100 + VAR13.VAR25 / 10000000;
VAR14 = (VAR14 * VAR26) / 500;
if (VAR14 - VAR26 >= VAR9->VAR27)
VAR9->VAR27 = VAR14 - VAR26 + 1;


if (VAR14 == VAR9->VAR27 ||
!(VAR9->VAR28 & VAR29)) {
FUN4(&VAR9->mutex);
if (VAR2->VAR30 & VAR31)
return -VAR32;
if (FUN7(20) && FUN8(VAR33))
return -VAR34;
if (FUN3(&VAR9->mutex))
return -VAR18;
goto VAR22;
}

for (VAR15 = 0; VAR15 < VAR5 && VAR14 > VAR9->VAR27;
VAR9->VAR27++) {
unsigned VAR35 = VAR9->VAR27 % VAR26;
struct v4l2_rds_data VAR36;

if (FUN9(&VAR36, VAR4 + VAR15, sizeof(VAR36))) {
VAR15 = -VAR37;
break;
}
VAR15 += sizeof(VAR36);
if (!VAR9->VAR38)
continue;
if ((VAR36.VAR39 & VAR40) == VAR41 ||
(VAR36.VAR39 & VAR42))
continue;
VAR36.VAR39 &= VAR40;
VAR11[VAR35] = VAR36;
}
FUN4(&VAR9->mutex);
return VAR15;
}
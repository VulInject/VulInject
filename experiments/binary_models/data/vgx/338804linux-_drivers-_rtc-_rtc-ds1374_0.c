static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR7 = FUN3(VAR6);
struct rtc_time VAR8;
unsigned long VAR9, VAR10;
int VAR11;
int VAR12 = 0;

if (VAR6->VAR13 <= 0)
return -VAR14;

VAR12 = FUN4(VAR2, &VAR8);
if (VAR12 < 0)
return VAR12;

VAR9 = FUN5(&VAR4->VAR15);
VAR10 = FUN5(&VAR8);


if (FUN6(VAR9, VAR10))
VAR9 = 1;
else
VAR9 -= VAR10;

FUN7(&VAR7->mutex);

VAR12 = VAR11 = FUN8(VAR6, VAR16);
if (VAR12 < 0)
goto VAR17;


VAR11 &= ~VAR18;

VAR12 = FUN9(VAR6, VAR16, VAR11);
if (VAR12 < 0)
goto VAR17;

VAR12 = FUN10(VAR6, VAR9, VAR19, 3);
if (VAR12)
goto VAR17;

if (VAR4->VAR20) {
VAR11 |= VAR18 | VAR21;
VAR11 &= ~VAR22;

VAR12 = FUN9(VAR6, VAR16, VAR11);
}

VAR17:
FUN11(&VAR7->mutex);
return VAR12;
}
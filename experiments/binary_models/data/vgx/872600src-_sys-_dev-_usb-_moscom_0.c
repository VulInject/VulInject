int
FUN1(void *VAR1, int VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR1;
int VAR7;

if (VAR4->VAR8 <= 0 || VAR4->VAR8 > 115200)
return (VAR9);

VAR7 = VAR10 / VAR4->VAR8;

if (VAR7 == 0 || VAR7 > 0xffff)
return (VAR9);

FUN2(VAR6, VAR11, VAR12);
FUN2(VAR6, VAR13, VAR7 & 0xFF);
FUN2(VAR6, VAR14, (VAR7 >> 8) & 0xFF);

if (FUN3(VAR4->VAR15, VAR16))
VAR7 = VAR17;
else
VAR7 = VAR18;
if (FUN3(VAR4->VAR15, VAR19)) {
if (FUN3(VAR4->VAR15, VAR20))
VAR7 |= VAR21;
else
VAR7 |= VAR22;
} else
VAR7 |= VAR23;
switch (FUN3(VAR4->VAR15, VAR24)) {
case VAR25:
VAR7 |= FUN4(5);
break;
case VAR26:
VAR7 |= FUN4(6);
break;
case VAR27:
VAR7 |= FUN4(7);
break;
case VAR28:
VAR7 |= FUN4(8);
break;
}

VAR6->VAR29 = VAR7;
FUN2(VAR6, VAR11, VAR6->VAR29);


if (FUN3(VAR4->VAR15, VAR30))

} else if (FUN3(VAR4->VAR31, VAR32|VAR33)) {

} else {

}

return (0);
}
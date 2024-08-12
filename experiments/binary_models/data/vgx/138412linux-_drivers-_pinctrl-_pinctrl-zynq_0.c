static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3,
unsigned long *VAR4)
{
u32 VAR5;
int VAR6;
unsigned int VAR7 = 0;
unsigned int VAR8 = FUN2(*VAR4);
struct VAR9 *VAR10 = FUN3(VAR2);

if (VAR3 >= VAR11)
return -VAR12;

VAR6 = FUN4(VAR10->VAR13, VAR10->VAR14 + (4 * VAR3), &VAR5);
if (VAR6)
return -VAR15;

switch (VAR8) {
case VAR16:
if (!(VAR5 & VAR17))
return -VAR18;
VAR7 = 1;
break;
case VAR19:
if (!(VAR5 & VAR20))
return -VAR18;
VAR7 = 1;
break;
case VAR21:
if (VAR5 & VAR17 || VAR5 & VAR20)
return -VAR18;
break;
case VAR22:
VAR7 = !!(VAR5 & VAR23);
break;
case VAR24:
{
enum zynq_io_standards VAR25 = FUN5(VAR5);

if (VAR25 != VAR26)
return -VAR18;
if (!(VAR5 & VAR27))
return -VAR18;
VAR7 = !!(VAR5 & VAR27);
break;
}
case VAR28:
case VAR29:
VAR7 = FUN5(VAR5);
break;
default:
return -VAR12;
}

*VAR4 = FUN6(VAR8, VAR7);
return 0;
}
enum VAR1
FUN1(const struct VAR2 *VAR3,
struct VAR4 *VAR5,
const struct VAR6 *VAR7,
const struct VAR8 *VAR9)
{
struct gc_arena VAR10 = FUN2();

if (VAR9->VAR11 < (1 + VAR12))
{
FUN3(VAR13,
"",
VAR9->VAR11, FUN4(VAR7, &VAR10));
goto VAR14;
}


uint8_t VAR15 = *FUN5(VAR9);
int VAR16 = VAR15 >> VAR17;
int VAR18 = VAR15 & VAR19;




if (VAR16 != VAR20
&& VAR16 != VAR21
&& VAR16 != VAR22
&& VAR16 != VAR23
&& VAR16 != VAR24)
{

FUN3(VAR13,
"",
FUN4(VAR7, &VAR10),
VAR16);
goto VAR14;
}

if (VAR18 != 0)
{
FUN3(VAR13,
"",
VAR18,
FUN4(VAR7, &VAR10));
goto VAR14;
}


struct buffer VAR25 = *VAR9;
FUN6(&VAR25, 1);
if (!FUN7(&VAR5->VAR26, &VAR25)
|| !FUN8(&VAR5->VAR26))
{
FUN9(VAR27,
"",
FUN4(VAR7, &VAR10));
goto VAR14;
}

VAR5->VAR28 = FUN10(VAR9);
VAR5->VAR29 = VAR3->VAR30;


bool VAR31 = FUN11(&VAR5->VAR28, &VAR5->VAR29,
VAR7, NULL);

if (!VAR31)
{
goto VAR14;
}


FUN12(&VAR10);
if (VAR16 == VAR22)
{
return VAR32;
}
else if (VAR16 == VAR24)
{
return VAR33;
}
else if (VAR16 == VAR21)
{
return VAR34;
}
else if (VAR16 == VAR23)
{
return VAR35;
}
else
{
return VAR36;
}

VAR14:
FUN13();
FUN12(&VAR10);
return VAR37;
}
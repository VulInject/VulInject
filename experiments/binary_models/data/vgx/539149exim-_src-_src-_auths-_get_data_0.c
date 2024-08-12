int
FUN1(void * VAR1, VAR2 * VAR3, const VAR4 ** VAR5,
unsigned VAR6, int VAR7, VAR4 * VAR8, int VAR9)
{
int VAR10, VAR11;
VAR4 * VAR12, * VAR13;

VAR12 = VAR14 FUN2(*VAR5);
if (VAR12 == *VAR5) VAR12 = FUN3(VAR12);



if (!VAR12)
{
if (!(VAR6 & VAR15))
{
if (FUN4(VAR1, VAR16, "") >= 0)
(void) FUN5(VAR1, US VAR8, VAR9, '', VAR7);
}
if (VAR17.VAR18)
{
*VAR8 = 0;       
return VAR19;
}
FUN6(VAR8, VAR9, ""%VAR20\""
"", *VAR5, VAR3->VAR21, VAR22);
return VAR23;
}

VAR10 = FUN7(VAR12);



for (int VAR24 = 0; VAR24 < VAR10; VAR24++)
if (VAR12[VAR24] == '')
if (VAR12[VAR24+1] != '')
VAR12[VAR24] = 0;
else
if (--VAR10 > VAR24+1) memmove(VAR12 + VAR24 + 1, VAR12 + VAR24 + 2, VAR10 - VAR24);



if (VAR6 & VAR15)
{
if (FUN4(VAR1, VAR16, "",
VAR3->VAR25, VAR10 == 0 ? "" : "", FUN8(CUS VAR12, VAR10)) < 0)
return VAR26;
}
else
if (FUN4(VAR1, VAR16, "", FUN8(CUS VAR12, VAR10)) < 0)
return VAR26;



if (FUN5(VAR1, VAR8, VAR9, '', VAR7))
{
*VAR5 = NULL;
return VAR27;
}



if (VAR28 != 0 || VAR8[0] != '') return VAR29;



if (VAR6 & VAR30)
{
if (FUN4(VAR1, VAR16, "") >= 0)
(void)FUN5(VAR1, US VAR8, VAR9, '', VAR7);
FUN6(VAR8, VAR9, ""
"", VAR3->VAR21);
return VAR23;
}



VAR11 = FUN9(VAR8+4, &VAR13);



if (VAR11 < 0)
{
VAR4 *VAR31 = FUN3(VAR8);
if (!(VAR6 & VAR32))
{
if (FUN4(VAR1, VAR16, "") >= 0)
(void)FUN5(VAR1, US VAR8, VAR9, '', VAR7);
FUN6(VAR8, VAR9, ""
""%VAR20\"", VAR31);
return VAR19;
}
FUN10(VAR33) FUN11(""
"", VAR31);
VAR13 = FUN3(VAR14"");
VAR11 = 0;
}

*VAR5 = VAR13;
return VAR34;
}
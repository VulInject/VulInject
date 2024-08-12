static int
FUN1(iommulib_handle_t VAR1,
VAR2 *VAR3, VAR2 *VAR4, ddi_dma_handle_t VAR5)
{
VAR6 *VAR7 = FUN2(VAR1);
VAR8 *VAR9 = NULL;
uint_t VAR10 = 0;
int VAR11 = VAR12;
int VAR13 = FUN3(VAR4);
const char *VAR14 = FUN4(VAR4);
const char *VAR15 = "";

VAR9 = NULL;
VAR10 = 0;
if (FUN5(VAR3, VAR5, &VAR9,
&VAR10) != VAR16) {
FUN6(VAR17, ""
"", VAR15, VAR14, VAR13, (void *)VAR4);
VAR11 = VAR12;
goto VAR18;
}

if (FUN7(VAR3, VAR5) != VAR16) {
FUN6(VAR17, ""
"", VAR15, VAR14, VAR13, (void *)VAR4);
VAR11 = VAR12;
goto VAR18;
}

if (FUN8(VAR3, VAR4, VAR5)
!= VAR16) {
FUN6(VAR17, "",
VAR15, VAR14, VAR13, (void *)VAR4);
VAR11 = VAR12;
goto VAR18;
}

if (FUN9(VAR7, VAR4, VAR9, VAR10, -1, 0)
!= VAR16) {
FUN6(VAR17, ""
"", VAR15, VAR14, VAR13, (void *)VAR4);
VAR11 = VAR12;
} else {
VAR11 = VAR16;
}
VAR18:
if (VAR9)
FUN10(VAR9, sizeof (VAR8) * VAR10);
return (VAR11);
}